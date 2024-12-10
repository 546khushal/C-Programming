#include<stdio.h>

int Fact(int x)
{
    if(x==1 || x==0)
    return 1;
    else
    return x*Fact(x-1);
}
int GCD(int x,int y)
{
    return (y==0)?x:GCD(y,x%y);
}
void DecToBase(int no,int base)
{
	  if(no>0)
	  {
		DecToBase(no/base,base);
		if(no%base<10)
		printf("%d",no%base);
		else
		printf("%c",no%base+55);
	  }
}
/*
void BinaryToBase(int binary, int base) {
    static int decimal = 0, power = 1; // Static variables to retain values across recursive calls

    if (binary > 0) {
	// Convert binary to decimal
	decimal += (binary % 10) * power;
	power *= 2;
	BinaryToBase(binary / 10, base); // Recursive call for remaining binary digits
    } else if (decimal > 0) {
	// Convert the decimal equivalent to the desired base
	if (decimal / base > 0)
	    BinaryToBase(decimal / base, base);
	// Print remainder for the current place value in the target base
	if (decimal % base < 10)
	    printf("%d", decimal % base);
	else
	    printf("%c", (decimal % base) + 55); // For bases greater than 10 (like hexadecimal)
    }
}
  */
int BinaryToDecimal(int no,int base) {
    if (no == 0)
	return 0;
    return no % base + 2 * BinaryToDecimal(no / base,base);
}

int SeriesSum(int n){
	if(n==0) return 0;
	return SeriesSum(n-1)+n;
}


void Menu(){
	printf("\n1. Factorial using Recursion");
	printf("\n2. GCD using Recursion");
	printf("\n3. Number system conversion Decimal to other");
	printf("\n4. Number system conversion Binary to other");
	printf("\n5. Sum of Series");
	printf("\n8. Exit");
	printf("\n\n Enter Your Choice : ");


}
void main()
{
    int n,g1,g2,base,ch;
    do{
	clrscr();
	Menu();
	scanf("%d",&ch);
	switch(ch){
	case 1://factorial
	printf("\nEnter n to find Factorial : ");
	scanf("%d",&n);
	printf("\nFactorial of 5 = %d",Fact(n));
	break;
	case 2://gcd
	printf("\nEnter two value to find GCD : ");
	scanf("%d %d",&g1,&g2);
	printf("\nGCD of %d,and %d = %d",g1,g2,GCD(g1,g2));
	break;
	case 3://number convert decimal to onter
	printf("\nEnter Decimal Number : ");
	scanf("%d",&n);
	printf("Enter Base : ");
	scanf("%d",&base);
		switch(base){
			case 2:
			printf("\nBinary of %d is : ",n);
			DecToBase(n,base);
			break;
			case 8:
			printf("\nOctal of %d is : ",n);
			DecToBase(n,base);
			break;
			case 16:
			printf("\nHexadecimal of %d is : ",n);
			DecToBase(n,base);
			break;
			default:
			printf("\nNumber %d covert into Base %d is : ",n,base);
			DecToBase(n,base);
		}
		break;
	case 4://number convert binary to onter
	printf("\nEnter Bianry Number : ");
	scanf("%d",&n);
	printf("Enter Base : ");
	scanf("%d",&base);
		switch(base){
			case 10:
			printf("\nDecimal of %d is : %d",n);
			BinaryToDecimal(n,base);
			break;
			case 8:
			printf("\nOcatal of %d is : ",n);
			//BinaryToBase(n,base);
			break;
			case 16:
			printf("\nHexadecimal of %d is : ",n);
			//BinaryToBase(n,base);
			break;
			default:
			printf("\nNumber %d covert into Base %d is : ",n,base);
			//BinaryToBase(n,base);
		}
		break;

	case 5:
	printf("\nEnter number  : ");
	scanf("%d",&n);
	printf("\nSeries sum is  = %d",SeriesSum(n));

	break;

	case 8:
	clrscr();
	gotoxy(35,12);
	printf("Thank you");
	break;
	default:
	printf("Invalid Choice");
    }
	getch();
    }while(ch!=8);
}