#include<stdio.h>
#include<conio.h>

void main()
{

	int a[3][3],b[3][3],j,i,r,c;
	clrscr();
	printf("\n\n\t enter how many row and col==>");
	scanf("%d %d",&r,&c);

	printf("\n\n enter matrix 1 ....\n\n");
	for(i=0;i<r;i++)
	{
	   for(j=0;j<c;j++)

	   {
	     printf("\n\n\t enter ofa[%d] [%d]==>",i,j);
	     scanf("%d",&a[i][j]);
	   }
	}

		printf("\n\n enter matrix 2 ....\n\n");
	for(i=0;i<r;i++)
	{
	   for(j=0;j<c;j++)

	   {
	     printf("\n\n\t enter ofb[%d] [%d]==>",i,j);
	     scanf("%d",&b[i][j]);
	   }
	}
	 clrscr();
	printf("\n\n matrix 1.....\n\n");
	for(i=0;i<r;i++)
	{
	   for(j=0;j<c;j++)

	   {
	     printf(" %d",a[i][j]);


	   }
	   printf("\n\n");
	}

		printf("\n\n matrix 2.....\n\n");
	for(i=0;i<r;i++)
	{
	   for(j=0;j<c;j++)

	   {
	     printf(" %d",b[i][j]);


	   }
	   printf("\n\n");
	}










getch();
}