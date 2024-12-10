#include<stdio.h>
#include<conio.h>
typedef enum Bool{false,true}Bool;
Bool IsPrime(const int no)
{
    int i;
    if(no==0 || no==1)
    return false;
    if(no==2)
    return true;
    if(no%2==0)
    return false;
    for(i=3;i<=no/2;i++)
    {
	if(no%i==0)
	return false;
    }
    return true;
}

void main()
{
   FILE *fp,*fpr,*fcm;
   int no;
   fp=fopen("num.txt","w");
   fpr=fopen("prime.txt","w");
   fcm=fopen("comp.txt","w");
   if(fp==NULL)
   {
      printf("\nFile can't open");
      getch();
      return;
   }
   if(fpr==NULL)
   {
      printf("\nFile can't open");
      getch();
      return;
   }
   if(fcm==NULL)
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
      if(no==0)
      break;
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
	if(IsPrime(no)==true)
	fprintf(fpr,"%4d",no);
	else
	fprintf(fcm,"%4d",no);
   }
   fclose(fp);
   fclose(fpr);
   fclose(fcm);
   printf("\nData update sucussfully");
   getch();

}