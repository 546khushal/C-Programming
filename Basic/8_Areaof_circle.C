/*
Program to calculate the area of a circle.
Author: Khushal
Date: [Insert the current date here]
*/

#include <stdio.h>

#define PI 3.14159 


float calculate_area(float radius) {
    return PI * radius * radius; 
}

int main() {
    float radius, area;

   
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

   
    area = calculate_area(radius);

    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);

    return 0;
}
