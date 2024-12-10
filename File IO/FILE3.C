#include<stdio.h>
#include<conio.h>
void main()
{
   FILE *fp,*fo,*fe;
   int no;
   fp=fopen("num.txt","w");
   fe=fopen("even.txt","w");
   fo=fopen("odd.txt","w");
   if(fp==NULL)
   {
      printf("\nFile can't open");
      getch();
      return;
   }
   if(fe==NULL)
   {
      printf("\nFile can't open");
      getch();
      return;
   }
   if(fo==NULL)
   {
      printf("\nFile can't open");
      getch();
      return;
   }
   do
   {
      clrscr();
      printf("\nEnter no");
      scanf("%d",&no);
      fprintf(fp,"%4d",no);
   }while(no>0);
   fclose(fp);
   fp=fopen("num.txt","r");
   if(fp==NULL)
   {
      printf("\nFile can't open");
      getch();
      return;
   }
   while(fscanf(fp,"%d",&no)!=EOF)
   {
	if(no%2==0)
	fprintf(fe,"%4d",no);
	else
	fprintf(fo,"%4d",no);
   }
   fclose(fp);
   fclose(fe);
   fclose(fo);
   printf("\nData update sucussfully");
   getch();

}