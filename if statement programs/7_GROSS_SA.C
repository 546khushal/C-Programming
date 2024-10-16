/*
WAP to  calculate  gross salary of employee using.
1.gross salary=basic pay +DA +HRA-PF
2.DA=30% if basiz pay<5000 otherwise DA=45% of the basic pay
3.HRA=15% of basic pay.
4.pf=12% of basic pay.

Date:
Author:Khushal
*/
#include<stdio.h>
#include<conio.h>
float Cal_GS(const float basic_pay){
	float gs,da,hrf,pf;
	if(basic_pay<=5000){
	   da=(basic_pay*30)/100;
	   hrf=(basic_pay*15)/100;
	   pf=(basic_pay*12)/100;
	   gs=basic_pay+da+hrf-pf;
	   return gs;
	   }

	else if(basic_pay>5000){
	   da=(basic_pay*45)/100;
	   hrf=(basic_pay*15)/100;
	   pf=(basic_pay*12)/100;
	   gs=basic_pay+da+hrf-pf;
	   return gs;
	   }



}
int main(){
	float basicp;
	//clrscr();
	printf("enter Basic Pay: ");
	scanf("%f",&basicp);
	printf("Base on your basic pay %g\n your gross salary is : %g ",basicp,Cal_GS(basicp));
	//getch();
	return 0;

}