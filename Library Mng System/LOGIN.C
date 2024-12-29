#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct Member{
	char M_Name[20];
	int M_Id;
	int NoOfBook;
}Member;

typedef struct Book{
	char B_Name[20];
	int B_Id;
	char An[20];     //authorname
	char Pn[20];  //publishername
	int Copies;
}Book;
typedef struct Date{
	int day;
	int month;
	int year;
}Date;
typedef struct IssueBook{
	Date date;
	int B_Id;
	int M_Id;
	Date ER_Date;

}Ib;
typedef struct ReturnBook{
	int M_Id;
	int B_Id;
	Date rdate;

}Rb;

void LibMenu(){
	printf("\n (^-^)->> KHUSHAL LIBRARY SYSTEM <<-(^-^)");
	printf("\n\n\n 1.Member");
	printf("\n 2.Book");
	printf("\n 3.Issue Book");
	printf("\n 4.Return Book");
	printf("\n 5.Report");
	printf("\n 6.Logout");
	printf("\n\nEnter Your Choice : ");
}
void MemberMenu()
{
   printf("\n1..Add");
   printf("\n2..Display");
   printf("\n3..Search");
   printf("\n4..Modify(Plz can't change  No.of Book)");
   printf("\n5..Delete");
   printf("\n6..Exit");
   printf("\n\nEnter your choice");

}
void BookMenu()
{
   printf("\n1..Add");
   printf("\n2..Display");
   printf("\n3..Search");
   printf("\n4..Modify");
   printf("\n5..Delete");
   printf("\n6..Exit");
   printf("\n\nEnter your choice");

}
void IssueMenu()
{
   printf("\n1..New Issue");
   printf("\n2..Display Issue list");
   printf("\n3..Search");
   printf("\n4..Modify");
   printf("\n5..Delete");
   printf("\n6..Exit");
   printf("\n\nEnter your choice");

}

typedef enum Bool{false,true}Bool;

void main()
{
    FILE *fp,*fm,*fb,*fi,*fr,*ftmp,*tmp1,*tmp2,*tmp3;

    Bool flag=true;
    int count=0,bid,mid,issued;
    Member memb;
    Book book;
    Ib ib;
    Rb rb;
    int recsizem=sizeof(Member);
    int recsizeb=sizeof(Book);
    int recsizeib=sizeof(Ib);
    int recsizerb=sizeof(Rb);


    char uname[30],pwd[30];
    char us[30],pw[30];
    int ch,chm,chb,chi;
    int i=-1;
    fp=fopen("pass.txt","r");
    fm=fopen("member.dat","rb+");
    fb=fopen("book.dat","rb+");
    fi=fopen("issue.dat","rb+");
    fr=fopen("return.dat","rb+");

    clrscr();
    if(fp==NULL)
    {
      printf("\nEROOR:File can't open");
      getch();
      return;
    }
    if(fm==NULL)
    { fm=fopen("member.dat","wd+");
	if(fm==NULL){
	printf("\nEROOR:File can't open");
	getch();
	return;
	}
    }
    if(fb==NULL)
    { fb=fopen("book.dat","wd+");
	if(fb==NULL){
	printf("\nEROOR:File can't open");
	getch();
	return;
	}
    }
    if(fi==NULL)
    { fi=fopen("issue.dat","wd+");
	if(fi==NULL){
	printf("\nEROOR:File can't open");
	getch();
	return;
	}
    }
    if(fr==NULL)
    { fr=fopen("return.dat","wd+");
	if(fr==NULL){
	printf("\nEROOR:File can't open");
	getch();
	return;
	}
    }

     fgets(us,79,fp);
     fgets(pw,79,fp);
    do
    {
	flag=true;
	clrscr();
	gotoxy(35,12);
	printf("User Name :");
	gets(uname);
	strcat(uname,"\n");
	if(strcmp(uname,us)!=0)
	{
	  printf("\nInvalid user name");
	  getch();
	  flag=false;
	  count++;
	}
	if(count==3)
	{
	  printf("\nYou exceed number of attempts");
	  getch();
	  return;
	}
     }while(flag==false);
     do
     {
	 clrscr();
	  flag=true;
	 gotoxy(35,12);
	 printf("Password :");
	 do
	 {
	  i++;
	  pwd[i]=getch();
	  printf("*");
	  }while(pwd[i]!='\r');
	  pwd[i]='\0';
	  if(strcmp(pwd,pw)!=0)
	  {
	    printf("\nInvalid password");
	    getch();
	    flag=false;
	    i=-1;
	  }

     }while(flag==false);
     do
     {
	clrscr();
	LibMenu();
	scanf("%d",&ch);
	switch(ch)
	{
	  case 1:// member
	  do
		{
		clrscr();
		MemberMenu();
		scanf("%d",&chm);
		switch(chm)
		{
		case 1://Add member
		fseek(fm,0,SEEK_END);
		printf("\nFor new member insert No.of Book always : 0\n");
		printf("\nEnter Member_id , Name and No ofbooks : \n");
		scanf("%d%s%d",&memb.M_Id,memb.M_Name,&memb.NoOfBook);
		if(fwrite(&memb,sizeof(Member),1,fm)==1){
		printf("\nData written succussfully");
		}else{
		printf("\nError adding member.");
		}
		break;
		case 2://Display  member
		rewind(fm);
		printf("\nMember_id\tName\t\tNo.ofBooks");
		printf("\n----------------------------------------------");
		while(fread(&memb,sizeof(Member),1,fm))
		{
		printf("\n%5d\t\t%s\t\t%5d",memb.M_Id,memb.M_Name,memb.NoOfBook);
		}
		printf("\n----------------------------------------------");
		break;
		case 3://Search       member
		flag=false;
		rewind(fm);
		printf("\nEnter member_id to search");
		scanf("%d",&mid);
		while(fread(&memb,sizeof(Member),1,fm))
		{
		if(memb.M_Id==mid)
			{
			printf("\nRecord Found");
			printf("\nMember_id\t\tName\t\tNo.ofBooks");
			printf("\n--------------------------------------------");
			printf("\n%5d\t\t%s\t\t%5d",memb.M_Id,memb.M_Name,memb.NoOfBook);
			printf("\n--------------------------------------------");
			flag=true;
			break;
			}
		}
		if(flag==false)
		{
		printf("\nRecord not found");
		}
		break;
		case 4://Modify    member
		flag=false;
		rewind(fm);
		printf("\nEnter member id to Modify : ");
		scanf("%d",&mid);
		while(fread(&memb,sizeof(Member),1,fm))
		{
		if(memb.M_Id==mid)
			{
			printf("\nEnter Member_id , Name and No of Book : ");
			scanf("%d%s%d",&memb.M_Id,memb.M_Name,&memb.NoOfBook);
			fseek(fm,-recsizem,SEEK_CUR);
			fwrite(&memb,sizeof(Member),1,fm);
			printf("\nData modified succussfully");
			flag=true;
			break;
			}
		}
		if(flag==false)
		{
		printf("\nRecord not found");
		}
		break;

		case 5://Delete   member
		flag=false;
		rewind(fm);
		ftmp=fopen("tmp.dat","wb+");
		if(ftmp==NULL)
			{
			 printf("\ntmp file can't open");
			getch();
			return;
			}
		printf("\nEnter Member id to Delete : ");
		scanf("%d",&mid);
		while(fread(&memb,sizeof(Member),1,fm))
		{
			if(memb.M_Id!=mid)
			{
			fwrite(&memb,sizeof(Member),1,ftmp);
			}
			else
			{
			flag=true;
			}
		}
		if(flag==false)
		{
		printf("\nRecord not found");
		}
		else
		{
		fclose(fm);
		fclose(ftmp);
		 remove("member.dat");
		 rename("tmp.dat","member.dat");
		 fm=fopen("member.dat","rb+");
		 if(fm==NULL)
			{
			fm=fopen("member.dat","wb+");
			if(fm==NULL)
			{
				printf("\nFile can't open");
				getch();
				return;
			}
		 }
		 printf("\nRecord Deleted succussfully");
		 //remove("tmp.dat");
		 }
		break;
		case 6://Exit   member
		clrscr();
		gotoxy(28,12);
		printf("Thank You From Member Page");
		break;
		default:
		printf("\nWrong choice");
		}
		getch();
	  }while(chm!=6);
	  break;
	  case 2://Book
	  do
		{
		clrscr();
		BookMenu();
		scanf("%d",&chb);
		switch(chb)
		{
		case 1://Add book
		fseek(fb,0,SEEK_END);
		printf("\nEnter Book_no., name ,author name, publisher name Available Copies:\n");
		scanf("%d%s%s%s%d",&book.B_Id,book.B_Name,book.An,book.Pn,&book.Copies);
		if(fwrite(&book,sizeof(Book),1,fb)==1)
		{
		printf("\nData written succussfully");
		}
		else{
		printf("\nData written faild");
		}
		break;
		case 2://Display
		rewind(fb);
		printf("\nBook Id\t\tBook Name\t\Author Name\tPublisher Name\tCopies");
		printf("\n----------------------------------------------------------------------------");
		while(fread(&book,sizeof(Book),1,fb))
		{
			printf("\n%d\t\t%s\t\t%s\t\t%s\t\t%d",book.B_Id,book.B_Name,book.An,book.Pn,book.Copies);
		}
		printf("\n----------------------------------------------------------------------------");
		break;
		case 3://Search
		flag=false;
		rewind(fb);
		printf("\nEnter Book id to search");
		scanf("%d",&bid);
		while(fread(&book,sizeof(Book),1,fb))
		{
			if(book.B_Id==bid)
			{
				printf("\nRecord Found");
				printf("\nBook Id\t\t Book Name\t\t Author Name\t\tPublisher Name\t\tCopies");
				printf("\n----------------------------------------------------------------------------");
				printf("\n%d\t\t%s\t\t\t%s\t\t%s\t\t%d",book.B_Id,book.B_Name,book.An,book.Pn,book.Copies);
				printf("\n----------------------------------------------------------------------------");
				flag=true;
				break;
			}
		}
		if(flag==false)
		{
		printf("\nRecord not found");
		}
		break;
		case 4://Modify
		flag=false;
		rewind(fb);
		printf("\nEnter Book id to Modify");
		scanf("%d",&bid);
		while(fread(&book,sizeof(Book),1,fb))
		{
			if(book.B_Id==bid)
			{
			printf("\nEnter Book no., name ,author name, publisher name and Copies");
			scanf("%d%s%s%s%d",&book.B_Id,book.B_Name,book.An,book.Pn,&book.Copies);
			fseek(fb,-recsizeb,SEEK_CUR);
			fwrite(&book,sizeof(Book),1,fb);
			printf("\nData modified succussfully");
			flag=true;
			break;
			}
		}
		if(flag==false)
		{
		printf("\nRecord not found");
		}
		break;
		case 5://Delete
		flag=false;
		rewind(fb);
		ftmp=fopen("tmp.dat","wb+");
		if(ftmp==NULL)
			{
			printf("\ntmp file can't open");
			getch();
			return;
			}
		printf("\nEnter rollno to Delte");
		scanf("%d",&bid);
		while(fread(&book,sizeof(Book),1,fb))
		{
			if(book.B_Id!=bid)
			{
			fwrite(&book,sizeof(Book),1,ftmp);
			}
			 else
			{
			flag=true;
			}
		}
		if(flag==false)
		{
		printf("\nRecord not found");
		}
		else
		{
		fclose(fb);
		fclose(ftmp);
		remove("book.dat");
		rename("tmp.dat","book.dat");
		fb=fopen("book.dat","rb+");
		if(fb==NULL)
		{
			fb=fopen("book.dat","wb+");
			if(fb==NULL)
			{
			printf("\nBook File can't open");
			getch();
			return;
			}
		}
		printf("\nRecord Deleted succussfully");
		}
		///remove("tmp.dat");
		break;
		case 6://Exit
		clrscr();
		gotoxy(28,12);
		printf("Thank You From Book Page");
		break;
		default:
		printf("\nWrong choice");
		}
		getch();
		}while(chb!=6);

		break;

	  case 3://Issue
		do
		{
		clrscr();
		IssueMenu();
		scanf("%d",&chi);
		switch(chi)
		{
		case 1: // Issue Book to Member
			printf("\nEnter Book_Id, Member_Id, Issue Date, and Expected Return Date (Date Format: dd mm yyyy):\n");
			scanf("%d%d%d%d%d%d%d%d", &ib.B_Id, &ib.M_Id, &ib.date.day, &ib.date.month, &ib.date.year, &ib.ER_Date.day, &ib.ER_Date.month, &ib.ER_Date.year);
			//code for check member present and + in member no_of_book

			rewind(fm);
			flag = false;
			tmp1=fopen("tmp1.dat","wb+");
			while (fread(&memb, sizeof(Member), 1, fm))
			{
				if (memb.M_Id == ib.M_Id) {
					flag = true;
					memb.NoOfBook += 1;
				}
				fwrite(&memb, sizeof(Member), 1, tmp1); // copy in temp
			}
			if (!flag) {
				printf("\nMember Id is not present\n");
				remove("tmp1.dat");
				break;
				}
			fclose(fm);
			fclose(tmp1);
			remove("member.dat");
			rename("tmp1.dat","member.dat");
			fm = fopen("member.dat", "rb+");
			 if(fm==NULL)
			{
				printf("\nMember File can't open");
				break;
			}

			//code for check book present and - in book copies
			rewind(fb);
			flag = false;
			tmp2=fopen("tmp2.dat","wb+");
			while (fread(&book, sizeof(Book), 1, fb)) {
				if (book.B_Id == ib.B_Id && book.Copies > 0) {
					flag = true;
					book.Copies -= 1;
				}
				fwrite(&book, sizeof(Book), 1, tmp2);
			}
			if (!flag) {
				printf("\nBook Id not present!check Book Copies ro Book\n");
				remove(tmp2);
				break;
				}
			fclose(fb);
			fclose(tmp2);
			remove("book.dat");
			rename("tmp2.dat", "book.dat");
			fb = fopen("book.dat", "rb+");
			if(fb==NULL)
				{
					printf("\nBook File can't open");
					 break;
				}

			// Write Issue code
			fseek(fi, 0, SEEK_END);
			if (fwrite(&ib, sizeof(Ib), 1, fi) == 1) {
				printf("\nBook issued successfully\n");
			} else {
				printf("\nError: Book Issue failed\n");
			}

		break;


		case 2://Display issue
		rewind(fi);
		printf("\nBook_Id\tMember_Id\tIssute Date\t Expected_Reutrn_Date :\n");
		printf("\n-------------------------------------------------------------");
		while(fread(&ib,sizeof(Ib),1,fi))
		{
		printf("\n%d\t%d\t\t%02d-%02d-%04d\t%02d-%02d-%04d\n", ib.B_Id, ib.M_Id,ib.date.day ,ib.date.month,ib.date.year,ib.ER_Date.day,ib.ER_Date.month,ib.ER_Date.year);
		}
		printf("\n-------------------------------------------------------------");
		break;
		case 3://Search    issue
		flag=false;
		rewind(fi);
		printf("\nEnter member_id to search");
		scanf("%d",&mid);
		while(fread(&ib,sizeof(Ib),1,fi))
		{
		if(ib.M_Id==mid)
			{
			printf("\nRecord Found");
			printf("\nBook_Id\tMember_Id\tIssute Date\t Expected_Reutrn_Date :\n");
			printf("\n--------------------------------------------");
			printf("\n%d\t%d\t\t%d-%d-%d\t%d-%d-%d\n", ib.B_Id, ib.M_Id,ib.date.day ,ib.date.month,ib.date.year,ib.ER_Date.day,ib.ER_Date.month,ib.ER_Date.year);
			printf("\n--------------------------------------------");
			flag=true;
			break;
			}
		}
		if(flag==false)
		{
		printf("\nRecord not found");
		}
		break;
		case 4://Modify  issue
		flag=false;
		rewind(fi);
		printf("\nEnter member id to Modify : ");
		scanf("%d",&mid);
		while(fread(&ib,sizeof(Ib),1,fi))
		{
		if(ib.M_Id==mid)
			{
			printf("\nEnter Book_Id.,Member_Id ,Issute Date and Expected_Reutrn_Date \n(Date Formate: dd mm yyyy) :\n");
			scanf("%d%d %d%d%d %d%d%d", &ib.B_Id, &ib.M_Id, &ib.date.day ,&ib.date.month,&ib.date.year,&ib.ER_Date.day,&ib.ER_Date.month,&ib.ER_Date.year);
			fseek(fi,-recsizeib,SEEK_CUR);
			fwrite(&ib,sizeof(Ib),1,fi);
			printf("\nData modified succussfully");
			flag=true;
			break;
			}
		}
		if(flag==false)
		{
		printf("\nRecord not found");
		}
		break;

		case 5://Delete   issue
		flag=false;
		rewind(fi);
		ftmp=fopen("tmp.dat","wb+");
		if(ftmp==NULL)
			{
			 printf("\ntmp file can't open");
			getch();
			return;
			}
		printf("\nEnter Member id to Delete : ");
		scanf("%d",&mid);
		while(fread(&ib,sizeof(Ib),1,fi))
		{
			if(ib.M_Id!=mid)
			{
			fwrite(&ib,sizeof(Ib),1,ftmp);
			}
			else
			{
			flag=true;
			}
		}
		if(flag==false)
		{
		printf("\nRecord not found");
		}
		else
		{
		fclose(fi);
		fclose(ftmp);
		 remove("issue.dat");
		 rename("tmp.dat","issue.dat");
		 fi=fopen("issue.dat","rb+");
		 if(fi==NULL)
			{
			fi=fopen("issue.dat","wb+");
			if(fi==NULL)
			{
				printf("\nFile can't open");
				getch();
				return;
			}
		 }
		 printf("\nRecord Deleted succussfully");
		 //remove("tmp.dat");
		 }
		break;
		case 6://Exit issue
		clrscr();
		gotoxy(28,12);
		printf("Thank You From Issue Page");
		break;
		default:
		printf("\nWrong choice");
		}
		getch();
	  }while(chi!=6);
	  break;
	  case 4: // Return
		 printf("\nEnter Book_Id, Member_Id, and Return Date (Format: dd mm yyyy):\n");
		  scanf("%d %d %d %d %d", &rb.B_Id, &rb.M_Id, &rb.rdate.day, &rb.rdate.month, &rb.rdate.year);

		flag = false;
		issued = 0; // Variable to check if the M_Id and B_Id exist in issue.dat

		rewind(fi);
		while (fread(&ib, sizeof(Ib), 1, fi)) {
			if (ib.M_Id == rb.M_Id && ib.B_Id == rb.B_Id) {
			issued = 1; // Member has issued this book
			break;
			}
		}

	if (issued) {
			 rewind(fm);
			 tmp1 = fopen("tmp1.dat", "wb+");

			while (fread(&memb, sizeof(Member), 1, fm)) {
				if (memb.M_Id == rb.M_Id && memb.NoOfBook > 0) {
					flag = true;
					memb.NoOfBook -= 1; // Decrement the book count
				}
				fwrite(&memb, sizeof(Member), 1, tmp1);
			}
			fclose(fm);
			fclose(tmp1);

			if (!flag) {
				printf("\nMember ID not found or NoOfBook count is invalid.\n");
				remove("tmp1.dat");
				break;
				}

			// Update member.dat with changes
			remove("member.dat");
			rename("tmp1.dat", "member.dat");
			fm = fopen("member.dat", "rb+");


			// Check if Book ID exists
			rewind(fb);
			flag = false;
			tmp2 = fopen("tmp2.dat", "wb+");

			while (fread(&book, sizeof(Book), 1, fb)) {
				if (book.B_Id == rb.B_Id) {
				flag = true;
				book.Copies++; // Increment book copies
				}
			fwrite(&book, sizeof(Book), 1, tmp2);
			}
			fclose(fb);
			fclose(tmp2);

			if (!flag) {
			printf("\nBook ID not found\n");
			remove("tmp2.dat");
			break;
			}

			remove("book.dat");
			rename("tmp2.dat", "book.dat");
			fb = fopen("book.dat", "rb+");

		}
		else {
		printf("\nThe specified Member not issue any Book\n");
		break;
		}
		// return Book
		tmp3 = fopen("tmp3.dat", "wb+");

		rewind(fr);
		while (fread(&ib, sizeof(Ib), 1, fr)) {
			fwrite(&ib, sizeof(Ib), 1, tmp3);
		}
		fwrite(&rb, sizeof(Ib), 1, tmp3); // Add return record
		fclose(fr);
		fclose(tmp3);

		// Update return.dat with changes
		remove("return.dat");
		rename("tmp3.dat", "return.dat");
		fr = fopen("return.dat", "rb+");

		// Remove record from issue.dat
		rewind(fi);
		tmp1 = fopen("tmp1.dat", "wb+");
		if (!tmp1) {
			printf("\nFailed to open temporary issue file.\n");
			break;
		}

		flag = false;
		while (fread(&ib, sizeof(Ib), 1, fi)) {
			if (ib.M_Id == rb.M_Id && ib.B_Id == rb.B_Id) {
			flag = true;
			continue; //skip if found
			}
			fwrite(&ib, sizeof(Ib), 1, tmp1); //other in tmp1
		}
		fclose(fi);
		fclose(tmp1);

		if (flag) {
			remove("issue.dat");
			rename("tmp1.dat", "issue.dat");
			fi = fopen("issue.dat", "rb+");
			printf("\nBook return processed and issue record removed successfully!\n");
		} else {
		printf("\nNo matching record found in issue.dat.\n");
		remove("tmp1.dat");
	}

	break;

	  case 5://Report
	  break;
	  case 6://Exit
	  clrscr();
	  gotoxy(35,12);
	  printf("Thank You");
	  break;
	  default:
	  printf("\nWrong choice");

	}
	getch();
     }while(ch!=6);
}