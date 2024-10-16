/*
WAP to find out Minimum  number among Two number
Date:
Author:Khushal
*/
#include<stdio.h>
#include<conio.h>
float Find_Min(const float n1,const float n2){
	if(n1<n2){
		return n1;
	}
	else{
	      return n2;
	}
}
int main(){
    float n1,n2,min;
    //clrscr();
    printf("Enter first number:");
    scanf("%f",&n1);
    printf("Enter second number:");
    scanf("%f",&n2);
    min=Find_Min(n1,n2);
    printf("%g is Minimum value between %g and %g ",min,n1,n2);
    //getch();
    return 0;
    }

