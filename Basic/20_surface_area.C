/*
Program to calculate the surface area of a sphere.
Author: Khushal
Date:
*/

#include <stdio.h>

#define PI 3.1416  

float calculate_surface_area(float radius) {
    return 4.0 * PI * radius * radius;  
}

int main() {
    float radius, surface_area;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    surface_area = calculate_surface_area(radius);

    printf("The surface area of the sphere with radius %.2f is: %.2f square units.\n", radius, surface_area);

    return 0;
}
