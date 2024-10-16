/*
WAP in c to enter any aithmetic operator(+-/* ) and  two integer values and
display result according to selection of opeartor.
Date:
Author:Khushal
*/
#include<stdio.h>
//#include<conio.h>
int Arith_operation(const int n1,const int n2,int operation){
	if(operation=='+'){
		return n1+n2;
	}
	if(operation=='-'){
		return n1-n2;
	}
	if(operation=='*'){
		return n1*n2;
	}
	if(operation=='/'){
		if(n2 !=0){
		return n1/n2;
		}
		else{
	       //	printf("error:Division Zero is not allowed");
		return -1;
		}
	}
	else{
	 return 0;
	}
}
int main(){
    int n1,n2,Result;
    char ope;
   // clrscr();
    printf("Enter first number:");
    scanf("%d",&n1);

    printf("which operation (+ - * /):");
    scanf(" %c",&ope);

    printf("Enter second number:");
    scanf("%d",&n2);

    Result=Arith_operation(n1,n2,ope);
    if(Result==-1){
	printf("error:Division Zero is not allowed");
    }
    else if(Result==0 && (ope !='+' && ope !='-' &&  ope !='*' && ope !='/')){
    printf("invalid operation! plz check.\n");
    }
    else{
    printf("Result of %d %c %d is %d ",n1,ope,n2,Result);
    }
  //  getch();
   return 0;
    }

