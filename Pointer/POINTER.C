#include<stdio.h>
#include<conio.h>
void PointerPart_1(){
	int i=10;
	int *p,**q,***k;
	p=&i;
	q=&p;
	k=&q;
	clrscr();
	printf("Value of &i   is : %u\n",&i);          //65524
	printf("Value of p    is : %u\n",p);           //65524
	printf("Value of *p   is : %d\n",*p);          //10
	printf("Value of &p   is : %u\n",&p);          //65522
	printf("Value of q    is : %u\n",q);           //65522
	printf("Value of *q   is : %u\n",*q);          //65524
	printf("Value of **q  is : %d\n",**q);         //10
	printf("Value of k    is : %u\n",k);           //65520
	printf("Value of *k   is : %u\n",*k);          //65522
	printf("Value of **k  is : %u\n",**k);         //65524
	printf("Value of ***k is : %d\n",***k);        //10


}

void PointerPart_2(){
	int i=10;
	float *p;  // 'p' is a pointer to float.
	p = &i; // 'i' is an integer,
		//but you  are assigning its address to a float pointer.

	printf("size of i = %d\n",sizeof(i));     //2
	printf("size of p = %d\n",sizeof(p));     //2
	/*
	yha i int hai but if *p++ (--pointer support pointer arithmetic--)
	krte hai to 2 byte increase ki jgh 4 byte increase krta
	hai jo shi nhi hain, isliye int ke liye int pointer or
	float ke liye float pointer use krna hota hain
	*/

}

//function with pointer
int Add(int a,int b){
	return a+b;
	}

int Sub(int a,int b){
	return a-b;
	}

void PointerPart_3(){
	int (*fp)(int,int);   //use (int,int) for perameter
	fp=Sub; /*yha & ka use na kre to chalta hai kyu ki fn ka
		name khud address hi rkha  hai jbki varible value ko */

	printf("\nResult is : %d\n",(fp)(30,10));

}

void main(){
	clrscr();
	//PointerPart_1();
	//PointerPart_2();
	PointerPart_3();
	getch();
}