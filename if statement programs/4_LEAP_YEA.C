/*
WAP to find out given year which is leap or not
Date:
Author:Khushal
*/
#include<stdio.h>
#include<conio.h>
int Leap_year(const int year){
	if((year % 4==0 && year%100!=0) || (year%400==0)){
		return 1;
	}
	else{
	      return 0;
	}
}
int main(){
    int year;
    //clrscr();
    printf("Enter Year:");
    scanf("%d",&year);
    if(Leap_year(year)==1){
	printf("%d is leap year",year);
	}
    else{
	printf("%d is not leap year",year);
	}
    //getch();
    return 0;
	}

