/*
WAP to check whether the given number is binary or not
Author: Khushal
Date:
*/

#include <stdio.h>
int Is_binary(const int n){
    int num=n;
    int remainder;
    while(num>0){
        remainder=num%10;
        if(remainder != 1 && remainder !=0){
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
    if(Is_binary(n)==1){
        printf(" Entered Number %d is Binary",n);
    }
    else{
        printf(" Entered Number %d is Not Binary",n);
    }
    return 0;
}