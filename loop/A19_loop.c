/*
WAP to convert decimal to ocatl 
Author: Khushal
Date:
*/


#include <stdio.h>
int DecimalToOctal(const int n){
    int number=n,remainder,octal=0,base=1;
    while(number>0){
        remainder=number%8;
        octal=octal + remainder * base;
        number /= 8;
        base *=10;
    }
    return octal;


}

float DecimalToOctalfloatpart(const float n){
    float number =n, base = 0.1,octalfl=0;
    int digits=0;
    while(number>0 && base > 0.000001){
        number=number*8;
        digits = (int)number;
        octalfl =octalfl +digits*base;
        number -= digits;  // Remove the integer part
        base /= 10; 

    }
    return octalfl;
}

int main(){
    float decimal;
    printf("Enter a floating-point decimal number: ");
    scanf("%f", &decimal);
    int octalintpart =(int)decimal;
    float octalfloatpart =decimal-octalintpart;

    int octalInt = DecimalToOctal(octalintpart);
    float octalFrac = DecimalToOctalfloatpart(octalfloatpart);

    if (octalfloatpart == 0) {
        printf("Octal of decimal number %.6f is : %d\n", decimal, octalInt);
    } else {
        printf("Octal of decimal number %.6f is : %d%.6f\n", decimal, octalInt, octalFrac);
    }
}