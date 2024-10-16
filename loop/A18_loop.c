/*
WAP to convert decimal to binary
Author: Khushal
Date:
*/


#include <stdio.h>
int DecimalToBinary(const int n){
    int number=n,remainder,binary=0,base=1;
    while(number>0){
        remainder=number%2;
        binary=binary + remainder * base;
        number /= 2;
        base *=10;
    }
    return binary;


}

float DecimalToBinaryFloatPart(const float n) {
    float number = n, base = 0.1, binaryFloat = 0;
    int digits;
    while (number > 0 && base > 0.000001) {
        number *= 2;
        digits = (int)number; // Extract integer part (0 or 1)
        binaryFloat = binaryFloat + digits * base;
        number -= digits;     // Subtract the integer part
        base /= 10;           // Move the decimal place
    }
    return binaryFloat;
}


int main(){
    float decimal;
    printf("Enter a floating-point decimal number: ");
    scanf("%f", &decimal);
    
    int binaryIntPart = (int)decimal;          // Integer part
    float binaryFloatPart = decimal - binaryIntPart;

    int binaryInt = DecimalToBinary(binaryIntPart);
    float binaryFrac = DecimalToBinaryFloatPart(binaryFloatPart);

    // Print result
    if (binaryFrac == 0) {
        printf("Binary of decimal number %.6f is : %d\n", decimal, binaryInt);
    } else {
        printf("Binary of decimal number %.6f is : %d%.6f\n", decimal, binaryInt, binaryFrac);
    }
}