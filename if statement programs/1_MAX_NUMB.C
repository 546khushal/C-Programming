/*
WAP to find out Maximum number among Two number
Date:
Author:Khushal
*/
#include<stdio.h>
#include<conio.h>
float Find_Max(const float n1,const float n2){
	if(n1>n2){
		return n1;
	}
	else{
	      return n2;
	}
}
int  main(){
    float n1,n2,max;
    //clrscr();
    printf("Enter first number:");
    scanf("%f",&n1);
    printf("Enter second number:");
    scanf("%f",&n2);
    max=Find_Max(n1,n2);
    printf("%g is Max value between %g and %g ",max,n1,n2);
    getch();
    return 0;
    }

