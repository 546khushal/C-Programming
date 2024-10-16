/*WAP  to check whether given number is positive,negative or zero
Date:
Auther:khushal kumar
*/
#include<stdio.h>
#include<conio.h>
int Check_Num(const float n){
	if(n>0){
	return 1;
	}
	if(n==0){
	return 0;
	}
	else{
	return -1;
	}
}

int  main(){
	float n;
	//clrscr();
	printf("Enter any Number:");
	scanf("%f",&n);
	if(Check_Num(n)==1){
		printf("entered number %g is Positive",n);
	}
	if(Check_Num(n)==0){
		printf("entered number is Zero ");
	}
	if(Check_Num(n)==-1){
	printf("entered  number %g is Nagative",n);
	}
	//getch();
	return 0;
}