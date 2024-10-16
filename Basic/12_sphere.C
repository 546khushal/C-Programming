/*
Program to calculate the volume of a sphere.
Author: Khushal
Date:
*/

#include <stdio.h>

#define PI 3.14159 


float calculate_volume(float radius) {
    return (PI * radius * radius * radius*4)/3; 
    }

int main() {
    float radius, volume;

   
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);


    volume = calculate_volume(radius);

    // Printing the result
    printf("The volume of the sphere with radius %.2f is: %.2f\n", radius, volume);

    return 0;
}
