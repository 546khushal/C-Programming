//WAP to add,display,delete,update record in tabular formate
#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct Student
{
	int rollno;
	char name[20];
	int marks;
}Student;
typedef enum Bool{
	false,true
}Bool;
void Menu(){
	printf("\n 1.Add Record");
	printf("\n 2.Display Record");
	printf("\n 3.Modify Record");
	printf("\n 4.Delete Record");
	printf("\n 5.Search Record");
	printf("\n 6.Sort Record");
	printf("\n 7.Exit");
	printf("\n\nEnter Your Choice : ");
}
void SearchMenu(){
	printf("\n 1.Search By RollNo");
	printf("\n 2.Search By Name");
	printf("\n 3.Exit");
	printf("\n\nEnter Your Choice : ");
}
void SortMenu(){
	printf("\n 1.Sort By Marks");
	printf("\n 2.Sort By Name");
	printf("\n 3.Exit");
	printf("\n\nEnter Your Choice : ");
}

void Add(Student x[],int size){
	int i;
	for(i=0;i<size;i++){
	    scanf("%d%s%d", &x[i].rollno, x[i].name, &x[i].marks);
	}
}
void Display(Student x[],int size){
	int i;
	printf("\nRollNo\tName\tMarks\n");
	for(i=0;i<size;i++){
	    printf("%d\t%s\t%d\n",x[i].rollno,x[i].name,x[i].marks);
	}
}

void Modify(Student x[],int size,int rno){
	int i;
	Bool flag=false;
	for(i=0;i<size;i++){
	    if(x[i].rollno==rno){
	    scanf("%d%s%d",&x[i].rollno,x[i].name,&x[i].marks);
	    flag=true;

	    break;
	    }
	}
	if(flag==true){
	printf("\n(^-^)Record Successfully modified\n");
	}else{
	printf("\nRecord Not Found!\n");
	}
}

int Delete(Student x[],int size,int rno){
	int i,j;
	Bool flag=false;
	for(i=0;i<size;i++){
	    if(x[i].rollno==rno){
		 for(j=i;j<size;j++){
			x[i]=x[i+1];
		}
		flag=true;
		break;
	    }
	}
	if(flag==false){
	printf("Record Not Found!");
	}
	return --size;
}

void SearchByRollNo(Student x[],int size,int rno){
	    int i;
	    Bool flag=false;
	    printf("\nRollNo\tName\tMarks\n");
	    for(i=0;i<size;i++){
		if(x[i].rollno==rno){
		printf("%d\t%s\t%d\n",x[i].rollno,x[i].name,x[i].marks);
		flag=true;
		}
	    }
	    if(flag==false){
		printf("Record Not Found!");
	    }

}

void SearchByName(Student x[],int size,char *nm){
	    int i;
	    Bool flag=false;
	    printf("\nRollNo\tName\tMarks\n");
	    for(i=0;i<size;i++){
		if(strcmp(x[i].name,nm)==0){
		printf("%d\t%s\t%d\n",x[i].rollno,x[i].name,x[i].marks);
		flag=true;
		}
	    }
	    if(flag==false){
		printf("Record Not Found!");
	    }

}


void SortByMarks(Student x[],int size){
	int i,j;
	Student tmp;
	for(i=0;i<size;i++){
	    for(j=0;j<size-i-1;j++){
	    if(x[j].marks < x[j+1].marks){
		 tmp =   x[j];
		 x[j] =  x[j+1];
		 x[j+1] =tmp;

		 }
	    }
	}
}


void SortByName(Student x[],int size){
	int i,j;
	Student tmp;
	for(i=0;i<size;i++){
	    for(j=0;j<size-i-1;j++){
	    if(strcmp(x[j].name, x[j+1].name) > 0){
		 tmp=x[j];
		 x[j]=x[j+1];
		 x[j+1]=tmp;

		 }
	    }
	}
}

void main(){
	int ch,rno,sch,sortch,size,finalsize;
	Student s[20];
	char nm[20];
	do{
	  clrscr();
	  Menu();
	  scanf("%d",&ch);
	switch(ch){
		case 1://Add
		printf("\nEnter Record count to insert : ");
		scanf("%d",&size);
		Add(s,size);
		break;
		case 2://Display
		Display(s,size);
		break;
		case 3://Modify
		printf("Enter Rollno to modify record");
		scanf("%d",&rno);
		Modify(s,size,rno);
		Display(s,size);
		break;
		case 4://Delete
		printf("Enter Rollno to Delete record");
		scanf("%d",&rno);
		size=Delete(s,size,rno);
		Display(s,size);
		break;
		case 5://Search
		do{
			clrscr();
			SearchMenu();
			scanf("%d",&sch);
			switch(sch){
			case 1://Search by Rollno
			printf("Enter Rollno to Search : ");
			scanf("%d",&rno);
			SearchByRollNo(s,size,rno);
			break;
			case 2://Search by Name
			printf("Enter Name to Search : ");
			scanf("%s",nm);
			SearchByName(s,size,nm);
			break;
			case 3://Exit
			clrscr();
			gotoxy(35,12);
			printf("Thank you");
			break;
			default:
			printf("Wrong choice!");
			}
			getch();
		}while(sch!=3);
		break;

		case 6://Sort
		do{
			clrscr();
			SortMenu();
			scanf("%d",&sortch);
			switch(sortch){
			case 1://Sort by Marks in desc order
			SortByMarks(s,size);
			Display(s,size);
			break;
			case 2://Sort by Name
			SortByName(s,size);
			Display(s,size);
			break;
			case 3://Exit
			clrscr();
			gotoxy(35,12);
			printf("Sort!Thank you");
			break;
			default:
			printf("Wrong choice!");
			}
			getch();
		}while(sortch!=3);
		break;
		case 7://Exit
		clrscr();
		gotoxy(35,12);
		printf("Thank you");
		break;
		default:
		printf("Wrong choice!");
		}
		getch();
	}while(ch!=7);

}