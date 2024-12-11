#include<stdio.h>
#include<conio.h>
#include<string.h>
void Menu()
{
   printf("\n1..Add");
   printf("\n2..Display");
   printf("\n3..Search");
   printf("\n4..Modify");
   printf("\n5..Delete");
   printf("\n6..Exit");
   printf("\n\nEnter your choice");

}
typedef enum Bool{false,true}Bool;
void main()
{
    FILE *fp;
    Bool flag=true;
    int count=0;
    char uname[30],pwd[30];
    char us[30],pw[30];
    int ch;
    int i=-1;
    fp=fopen("pass.txt","r");
    clrscr();
    if(fp==NULL)
    {
      printf("\nEROOR:File can't open");
      getch();
      return;
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
	Menu();
	scanf("%d",&ch);
	switch(ch)
	{
	  case 1://Add
	  break;
	  case 2://Display
	  break;
	  case 3://Search
	  break;
	  case 4://Edit
	  break;
	  case 5://Delete
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