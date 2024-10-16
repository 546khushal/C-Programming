/*
WAP to read 4-digit number and print the sum of first and last digit of the number
Auther:khushal
Date:*/
#include <stdio.h>
#include <conio.h>
int First_last_digitsum(const int n ){
    int fn,ln;
    fn=n/1000;
    ln=n%10;
    return fn+ln;

}

int main(){
    int n;
    printf("enter 4 digits Number: ");
    scanf("%d",&n);
    printf("enter 1st and last digit sum is: %d",First_last_digitsum(n));
    return 0;
}