/*
WAP to check  given number no. is Armstrong or not
153 =1^3 + 5^3 + 3^3 = 1 + 125 + 27 => 153
9474=9^4 + 4^4 + 7^4 + 4^4 = 9474 
Auther:khushal
Date:*/
#include <stdio.h>
#include <conio.h>
int Is_Armstrong(const int n){
    int remainder,sum=0,digits=0;
    int num=n;
    while(num>0){
        num /= 10;
        digits++;
    }
     num = n;

    while(num>0){
        int power = 1;
        remainder = num % 10;

        // Calculate remainder^digits
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }
        sum += power;
        num /= 10;
    }
    printf("%d\n",sum);
    return sum;
}

int main(){
    int n;
    printf("Enter Number to check Armstrong or not : ");
    scanf("%d",&n);
    if(n==Is_Armstrong(n)){
        printf("Entered Number is ArmStrong");
    }
    else{
        printf("Entered Number is  not ArmStrong");
    }
}