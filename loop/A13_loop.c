/*
WAP to check whether the given number is octal or not
Author: Khushal
Date:
*/


#include <stdio.h>
int Is_Octal(const int n){
    int num=n;
    int remainder;
    while(num>0){
        remainder=num%10;
        if(remainder<0 || remainder >=8){
            return 0;
        }
        num=num/10;

    }
    return 1;
}
int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    if(Is_Octal(n)==1){
        printf(" Entered Number %d is Octal",n);
    }
    else{
        printf(" Entered Number %d is Not Octal",n);
    }
    return 0;
}