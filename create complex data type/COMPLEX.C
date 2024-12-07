/*complex number
a=real->3,-2,0.5
b=imaginary->4,-1,0
i=imaginary-> root-1
c=a+bi
	-2-4i
      = real -2,imagi -4
*/
#include<stdio.h>
#include<conio.h>

typedef struct Complex
{
	int  real;
	int imag;
}Complex;

void Read(Complex *p)
{
	char i;
	printf("complex number(ex. 3.5 4.2i):\n");
	scanf("%d %d %c",&p->real , &p->imag, &i);

	while(getchar() != '\n');
}

void Print(Complex c)  {
	printf("%d %di",c.real,c.imag);
}


Complex Add(Complex a,Complex b){
	Complex res;
	res.real = a.real + b.real;
	res.imag =a.imag +b.imag;
	return res;
}
Complex Sub(Complex a,Complex b){
	Complex res;
	res.real = a.real - b.real;
	res.imag =a.imag -b.imag;
	return res;
}
Complex Multi(Complex a,Complex b){
	Complex res;
	res.real = a.real*b.real -a.imag* b.imag;
	res.imag =a.real*b.imag + a.imag * b.real;
	return res;
}

void Menu(){
    printf("\n1. Read a Complex Number");
    printf("\n2. Print a Complex Number");
    printf("\n3. Add Two Complex Numbers");
    printf("\n4. Subtract Two Complex Numbers");
    printf("\n5. Multiply Two Complex Numbers");
    printf("\n6. Exit");
    printf("\n\nEnter your choice: ");
}


void main() {
    int ch;
    Complex x, y, z;

    do {
	clrscr();
	Menu();
	scanf("%d", &ch);
	switch (ch) {
	    case 1://Read
		printf("\nEnter a complex number:\n");
		Read(&x);
		break;

	    case 2://Print
		printf("\nThe complex number is: ");
		Print(x);
		break;

	    case 3:// Add
		printf("\nEnter first complex number:\n");
		//Read(&x);
		printf("\nEnter second complex number:\n");
		Read(&y);
		z = Add(x, y);
		printf("\nAddition result: ");
		Print(z);
		break;

	    case 4://Sub
		printf("\nEnter first complex number:\n");
		Read(&x);
		printf("\nEnter second complex number:\n");
		Read(&y);
		z = Sub(x, y);
		printf("\nSubtraction result: ");
		Print(z);
		break;

	    case 5://Multi
		printf("\nEnter first complex number:\n");
		Read(&x);
		printf("\nEnter second complex number:\n");
		Read(&y);
		z = Multi(x, y);
		printf("\nMultiplication result: ");
		Print(z);
		break;

	    case 6://Exit
		clrscr();
		gotoxy(35,12);
		printf("Thank you");
		break;

	    default:
		printf("\nInvalid choice. Please try again.\n");
	}
	getch();
    } while(ch!=6);

}

