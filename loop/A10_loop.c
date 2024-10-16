/*
WAP to find reverse of given number
Auther:khushal
Date:*/
#include <stdio.h>
#include <conio.h>
int Reverse_number(const int n ){
    int number=n,remainder,rev=0;
    while(number>0){
        remainder=number%10;
        rev=rev*10+remainder;
        number=number/10;
        
    }
    return rev;

}

int main(){
    int n;
    printf("enter Number: ");
    scanf("%d",&n);
    printf("enter Number %d  and reverse is: %d",n,Reverse_number(n));
    return 0;
}