/*write a program to swap two number
Auther:khushal
Date:
*/
#include<stdio.h>
#include<conio.h>

void main() {
	int a=3,b=4,temp;
	clrscr();
	printf("before swap a= %d and b= %d\n",a,b);
	/*
	temp=a;
	a=b;
	b=temp;
	*/

	/*
	a=a+b; //7
	b=a-b; //b=3  7-4
	a=a-b; //a=4  7-3
	*/

	a=a^b; //   011^100=111  //  0,0->0
	b=a^b; //   111^100=011  //  1,1->0
	a=a^b; //   111^011=100  //  0,1->1
				             //  1,0->1
	printf("After swap a= %d and b= %d\n",a,b);
	getch();
	}
