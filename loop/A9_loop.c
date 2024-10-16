/*
WAP to find sum of all digits of given number
Auther:khushal
Date:*/
#include <stdio.h>
#include <conio.h>
int Sum_of_all_digits(const int n ){
    int number=n,remainder,sum=0;
    while(number>0){
        remainder=number%10;
        sum+=remainder;
        number=number/10;
    }
    return sum;

}

int main(){
    int n;
    printf("enter Number: ");
    scanf("%d",&n);
    printf("enter Number %d  and Sum of all Digits is: %d",n,Sum_of_all_digits(n));
    return 0;
}