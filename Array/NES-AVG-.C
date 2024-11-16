#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef   struct  student
     {
       char sname[20],sid[5];
       int roll,m1,m2,m3,tot;
     struct avrage
     {
       float avg;


     }a;

     }S;
     void main()
     {
       S s[100];
       int n,i,flag=0;
       char stuid[20];

	clrscr();
	printf("\n\n\t enter how many student==> ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("\n\n\t------------------------\n");
	printf("\n\n\td student %d data",i+1);
	printf("\n\t------------------------\n");
	flushall();
	printf("\n\n\t enter student id==> ");
	gets(s[i].sid);


	printf("\n\n\t enter student name==> ");
	gets(s[i].sname);

	printf("\n\n\t enter student roll number==> ");
	scanf("%d",&s[i].roll);

	printf("\n\n\t enter 3 subject marks==> ");
	scanf("%d %d %d",&s[i].m1,&s[i].m2,&s[i].m3);


	s[i].tot=s[i].m1+s[i].m2+s[i].m3;
	s[i].a.avg=s[i].tot/3;

	 }

	printf("\n\t-----------------------------------");
	printf("\n\n\t student marks data.....\n");
	printf("\n\t-------------------------------------------------------------");
	printf("\n\n\tsid\tsname\troll\tm1\tm2\tm3\ttot\tavg");
	printf("\n\t-------------------------------------------------------------");
	for(i=0;i<n;i++)
	{
	printf("\n\n\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%.1f",s[i].sid,s[i].sname,s[i].roll,s[i].m1,s[i].m2,s[i].m3,s[i].tot,s[i].a.avg);
	 }
	 //linear search
	 printf("\n\n\t enter student id u want to search=>");
	 scanf("%s",stuid);
	 for(i=0;i<n;i++)
	 {
	  if(stricmp(s[i].sid,stuid)==0)
	  {
	  flag=1;
	  printf("\n\n\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%.1f",s[i].sid,s[i].sname,s[i].roll,s[i].m1,s[i].m2,s[i].m3,s[i].tot,s[i].a.avg);
	  break;
	  }
	}
	if(flag==0)
	{
	 printf("\n\t stuid %s not found.",stuid);
	}
       getch();
     }