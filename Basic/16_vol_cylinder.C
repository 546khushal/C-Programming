/*
Program to calculate the volume of a cylinder.
Author: Khushal
Date: [Insert the current date here]
*/

#include <stdio.h>

#define PI 3.1416 // Defining the value of Pi

float calculate_volume(const float radius,const  float height) {
    return PI * radius * radius * height;
}

int main() {
    float radius, height, volume;


    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    volume = calculate_volume(radius, height);

    printf("The volume of the cylinder with radius %.2f and height %.2f is: %.2f cubic units.\n", radius, height, volume);

    return 0;
}
