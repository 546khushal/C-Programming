#include<stdio.h>
#include<conio.h>
typedef struct Rational
{
   int numerator;
   int denominator;
}Rational;
int HCF(int x,int y)
{
    int r;
    while(y>0)
    {
	 r=x%y;
	 x=y;
	 y=r;
    }
    return x;
}
void Read(Rational *p)
{
   char slash;
   scanf("%d%c%d",&p->numerator,&slash,&p->denominator);
}
void Print(Rational a)
{
   int hcf;
   hcf=HCF(a.numerator,a.denominator);
   printf("%d/%d",(a.numerator/hcf),(a.denominator/hcf));
}
Rational Add(const Rational a,const Rational b)
{
   Rational tmp;
   tmp.numerator=a.numerator*b.denominator+a.denominator*b.numerator;
   tmp.denominator=a.denominator*b.denominator;
   return tmp;
}
Rational Sub(const Rational a,const Rational b)
{
   Rational tmp;
   tmp.numerator=a.numerator*b.denominator-a.denominator*b.numerator;
   tmp.denominator=a.denominator*b.denominator;
   return tmp;
}
Rational Multi(const Rational a,const Rational b)
{
   Rational tmp;
   tmp.numerator=a.numerator*b.numerator;
   tmp.denominator=a.denominator*b.denominator;
   return tmp;
}
Rational Divide(const Rational a,const Rational b)
{
   Rational tmp;
   tmp.numerator=a.numerator*b.denominator;
   tmp.denominator=a.denominator*b.numerator;
   return tmp;
}
void Menu()
{
   printf("\n1..Read");
   printf("\n2..Print");
   printf("\n3..Add");
   printf("\n4..Subtract");
   printf("\n5..Multiply");
   printf("\n6..Divide");
   printf("\n7..Exit");
   printf("\n\nEnter your choice");
}
void main()
{
   int ch;
   Rational x,y,z;
   do
   {
	 clrscr();
	 Menu();
	 scanf("%d",&ch);
	 switch(ch)
	 {
	   case 1://Read
	   printf("\nEnter any Rational number\n");
	   Read(&x);
	   break;
	   case 2://Print
	   printf("\nThe Rational number is ");
	   Print(x);
	   break;
	   case 3://Add
	   printf("\nEnter first Rational number");
	   Read(&x);
	   printf("\nEnter Second Rational number");
	   Read(&y);
	   z=Add(x,y);
	   printf("\nAddition of ");
	   Print(x);
	   printf(" and ");
	   Print(y);
	   printf(" =  ");
	   Print(z);
	   break;
	   case 4://Sub
	   printf("\nEnter first Rational number");
	   Read(&x);
	   printf("\nEnter Second Rational number");
	   Read(&y);
	   z=Sub(x,y);
	   printf("\nSubtraction of ");
	   Print(x);
	   printf(" and ");
	   Print(y);
	   printf(" =  ");
	   Print(z);
	   break;
	   case 5://Multi
	   printf("\nEnter first Rational number");
	   Read(&x);
	   printf("\nEnter Second Rational number");
	   Read(&y);
	   z=Multi(x,y);
	   printf("\nMultiplication of ");
	   Print(x);
	   printf(" and ");
	   Print(y);
	   printf(" =  ");
	   Print(z);
	   break;
	   case 6://Divide
	   printf("\nEnter first Rational number");
	   Read(&x);
	   printf("\nEnter Second Rational number");
	   Read(&y);
	   z=Divide(x,y);
	   printf("\nDivision of ");
	   Print(x);
	   printf(" and ");
	   Print(y);
	   printf(" =  ");
	   Print(z);
	   break;
	   case 7://Exit
	   clrscr();
	   gotoxy(35,12);
	   printf("Thank You");
	   break;
	   default:
	   printf("\nWrong choice");
	 }
	 getch();
   }while(ch!=7);
}