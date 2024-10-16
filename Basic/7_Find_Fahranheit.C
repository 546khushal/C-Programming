/*
Program to convert temperature from Celsius to Fahrenheit.
Author: Khushal
Date: [Insert the current date here]
*/

#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsius_to_fahrenheit(float celsius) {
    return (celsius* 9/5)+32;
}

int main() {
    float celsius, fahrenheit;

    // Taking input for temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Converting to Fahrenheit
    fahrenheit = celsius_to_fahrenheit(celsius);

    // Printing the result
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
