#include<stdio.h>
#include<conio.h>
void swap(int a,int b){
	int tmp;
	tmp=a;
	a=b;
	b=tmp;
	printf("\nIn function, swap value a = %d, b = %d\n",a,b);
}

void swap_with_pointer(int *a,int *b){

	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
	printf("\nIn function, swap value a = %d, b = %d\n",*a,*b);

}


void main(){
    int a=10,b=20;
    //int *p,*q;
    //p=&a;
    //q=&b;
    clrscr();
    printf("\nbefore Swap a = %d, b = %d\n",a,b);
    //swap(a,b);   //value fn me hi swap hui yha nhi
    //swap_with_pointer(p,q);
    swap_with_pointer(&a,&b);
    printf("\nAfter Swap a = %d, b = %d\n",a,b);
    getch();


}