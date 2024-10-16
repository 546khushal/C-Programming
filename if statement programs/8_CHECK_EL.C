/*
WAP to  check eligibilty of student for addmission.
student fullfill the following criteria for addmission:
math>=50,physics>=45,chemistry>=60,total of all subject>=170
or
total of math+physics>=120
Accept the marks  of all the three subjects from the user and check if student is eligible for admission.

Date:
Author:Khushal
*/
#include<stdio.h>
//#include<conio.h>
int check_eligibilty(const int m,const int p,const int c,const int total_all,const int total_mp){
	if((m>=50 && p>=45 && c>=60  && total_all>=170)|| (total_mp>=120)){
	 return 1;
	 }
	 else{
	 return 0;
	 }

}

int main(){
	int m,p,c,total_all,total_mp;
	//clrscr();
	printf("Enter  Marks of math:");
	scanf("%d",&m);
	printf("Enter  Marks of physics:");
	scanf("%d",&p);
	printf("Enter  Marks of chemistry:");
	scanf("%d",&c);
	total_all=m+p+c;
	total_mp=m+p;
	if(check_eligibilty(m,p,c,total_all,total_mp)){
		printf("Student is eligible for Admission");
	}
	else{
		printf("Student is not eligible for Admission");
	}
	//getch();
	return 0;
}
