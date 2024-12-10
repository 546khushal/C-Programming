#include<stdio.h>
#include<conio.h>
void main()
{
   FILE *fp;
   char s[80];
   fp=fopen("abc.txt","w");
   if(fp==NULL)
   {
      printf("File can't open");
      getch();
      return;
   }
   clrscr();
   printf("\nEnter few lines\n");
   while(strlen(gets(s))>0)
   {
      fputs(s,fp);
      fputs("\n",fp);
   }
   fclose(fp);
   fp=fopen("abc.txt","r");
   if(fp==NULL)
   {
      printf("File can't open");
      getch();
      return;
   }
   printf("\nLines are\n");
   while(fgets(s,79,fp)!=NULL)
   {
      puts(s);
   }
   fclose(fp);
   getch();
}