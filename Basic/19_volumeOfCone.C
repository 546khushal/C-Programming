/*
Program to calculate the volume of a cone.
Author: Khushal
Date: [Insert the current date here]
*/

#include <stdio.h>

#define PI 3.1416  // Defining the value of Pi

// Function to calculate the volume of the cone
float calculate_volume(float radius, float height) {
    return (1.0/3.0) * PI * radius * radius * height;
}

int main() {
    float radius, height, volume;

  
    printf("Enter the radius of the base of the cone: ");
    scanf("%f", &radius);

  
    printf("Enter the height of the cone: ");
    scanf("%f", &height);

    
    volume = calculate_volume(radius, height);

    printf("The volume of the cone with radius %.2f and height %.2f is: %.2f cubic units.\n", radius, height, volume);

    return 0;
}
