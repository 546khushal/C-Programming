/*
WAP to find greatest common divisor GCD for two positive integer number
Auther:khushal
Date:
*/
#include<stdio.h>
int Find_GCD(int a, int b) {
    int remainder;
    
    while (b != 0) {            //a = b * div + remainder;
        remainder = a % b;      //b bna a = remainder bna b * div + remainder;
        a = b;                 
        b = remainder;      
    }
    
    return a;  
}

int main(){
    int a,b;
    printf("enter value a:");
    scanf("%d",&a);
    printf("enter value b:");
    scanf("%d",&b);
    printf("GCD is: %d ",Find_GCD(a,b));
    }