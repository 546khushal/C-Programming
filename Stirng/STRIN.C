#include<stdio.h>
void main()
{
   char ch,ch1;
   clrscr();
   printf("\nEnter any charcter");
   //scanf("%c",&ch);
   ch=getchar();
   printf("\nThe charcter is %c",ch);
   printf("\nEnter other charcter");
   fflush(stdin);
   //scanf("%c",&ch1);
   ch1=getch();
   printf("\nThe other charcter is %c",ch1);
   getch();

}