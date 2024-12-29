#include<stdio.h>
#include<conio.h>
typedef enum Bool{false,true}Bool;
typedef struct Student
{
    int rollno;
    char name[20];
    int marks;
}Student;
void Menu()
{
  printf("\n1..Add Record");
  printf("\n2..Display Recods");
  printf("\n3..Search Record");
  printf("\n4..Modify Record");
  printf("\n5..Delete Record");
  printf("\n6..Exit");
  printf("\n\nEnter your choice");
}
void main()
{
   FILE *fp,*ft;
   Bool flag=false;
   int ch,rno;
   Student stud;
   int recsize=sizeof(stud);
   char nm[20];
   fp=fopen("lib.dat","rb+");
   if(fp==NULL)
   {
      fp=fopen("lib.dat","wb+");
      if(fp==NULL)
      {
	 printf("\nFile can't open");
	 getch();
	 return;
      }
   }
   do
   {
      clrscr();
      Menu();
      scanf("%d",&ch);
      switch(ch)
      {
	case 1://Add
	fseek(fp,0,SEEK_END);
	printf("\nEnter rollno , name and marks");
	scanf("%d%s%d",&stud.rollno,stud.name,&stud.marks);
	fwrite(&stud,sizeof(stud),1,fp);
	printf("\nData written succussfully");
	break;
	case 2://Display
	rewind(fp);
	printf("\nRollNo\t\tName\t\tMarks");
	while(fread(&stud,sizeof(stud),1,fp))
	{
	 printf("\n%d\t\t%s\t\t%d",stud.rollno,stud.name,stud.marks);
	}
	break;
	case 3://Search
	flag=false;
	rewind(fp);
	printf("\nEnter rollno to search");
	scanf("%d",&rno);
	while(fread(&stud,sizeof(stud),1,fp))
	{
	    if(stud.rollno==rno)
	    {
		printf("\nRecord Found");
		printf("\n%d\t\t%s\t\t%d",stud.rollno,stud.name,stud.marks);
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
	rewind(fp);
	printf("\nEnter rollno to Modify");
	scanf("%d",&rno);
	while(fread(&stud,sizeof(stud),1,fp))
	{
	    if(stud.rollno==rno)
	    {
		printf("\nEnter rollno , name and marks");
		scanf("%d%s%d",&stud.rollno,stud.name,&stud.marks);
		fseek(fp,-recsize,SEEK_CUR);
		fwrite(&stud,sizeof(stud),1,fp);
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
	rewind(fp);
	ft=fopen("tmp.dat","wb+");
	if(ft==NULL)
	{
	  printf("\ntmp file can't open");
	  getch();
	  return;
	}
	printf("\nEnter rollno to Delte");
	scanf("%d",&rno);
	while(fread(&stud,sizeof(stud),1,fp))
	{
	    if(stud.rollno!=rno)
	    {
		fwrite(&stud,sizeof(stud),1,ft);
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
	   fclose(fp);
	   fclose(ft);
	   remove("lib.dat");
	   rename("tmp.dat","lib.dat");
	   fp=fopen("lib.dat","rb+");
	   if(fp==NULL)
	   {
	     fp=fopen("lib.dat","wb+");
	     if(fp==NULL)
	     {
		 printf("\nFile can't open");
		 getch();
		 return;
	     }
	   }
	   printf("\nRecord Deleted succussfully");
	}
	break;
	case 6://Exit
	clrscr();
	gotoxy(35,12);
	printf("Thank You");
	break;
	default:
	printf("\nWrong Choice");
      }
      getch();

   }while(ch!=6);
   fclose(fp);

}