/*
Wap to display a table of conversion from fahrenheit to ceisuis.
fahreheit should start with 0 incremented by 20 and maximum value is 160
Auther:khushal
Date:
*/

#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float FahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;   //return (fahrenheit - 32) / 1.8; 

}

int main() {
    float fahrenheit;
    float celsius;

    // Print table header
    printf("Fahrenheit\tCelsius\n");
    printf("-----------------------\n");

    // Loop through Fahrenheit values from 0 to 160, incrementing by 20
    for (fahrenheit = 0; fahrenheit <= 160; fahrenheit += 20) {
        celsius = FahrenheitToCelsius(fahrenheit); // Convert to Celsius
        printf("%.1f\t\t%.1f\n", fahrenheit, celsius); // Print the table row
    }

    return 0;
}

