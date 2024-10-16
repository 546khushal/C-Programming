/*
Program to convert temperature from Fahrenheit to Celsius.
Author: Khushal
Date: [Insert the current date here]
*/

#include <stdio.h>


float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) / 1.8; 
}

int main() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = fahrenheit_to_celsius(fahrenheit);

    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}
