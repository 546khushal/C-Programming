/*
Program to calculate the circumference of a circle.
Author: Khushal
Date: 
*/

#include <stdio.h>

#define PI 3.14159 

float calculate_circumference(float radius) {
    return 2 * PI * radius; // Circumference = 2 * pi * r
}

int main() {
    float radius, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);


    circumference = calculate_circumference(radius);

    printf("The circumference of the circle with radius %.2f is: %.2f\n", radius, circumference);

    return 0;
}
