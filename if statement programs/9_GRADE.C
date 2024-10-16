/*
WAP to  to read marks from keboard and your program shouls display  equivalent grade according to following  table.
mark     grade
0-34     fail
35-59    second class
60-79    frist class
80-100   dist
Date:
Author:Khushal
*/
#include<stdio.h>
#include<conio.h>
int Grade(int mark){
	if(mark>=0 && mark<35){
	return 1;
	}
	if(mark>=35 && mark<60){
	return 2;
	}
	if(mark>=60 && mark<80){
	return 3;
	}
	if(mark>=80 && mark<100){
	return 4;
	}
	else{
	return 0 ;
	}

}


int main(){
	int mark,res;
	//clrscr();
	printf("enter the mark of std:");
	scanf("%d",&mark);
	res=Grade(mark);
	if(res==1){
	printf("fail");
	}
	if(res==2){
	printf("secong class");
	}
	if(res==3){
	printf("first class");
	}
	if(res==4){
	printf("dict");
	}
	if(res==0){
	printf("Something wrong!");
	}

	return 0;
}

