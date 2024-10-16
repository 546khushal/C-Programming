/*
Program to calculate the area of a right-angled triangle.
Author: Khushal
Date: 
*/

#include <stdio.h>

float calculate_area(float base, float height) {
    return (0.5 * base * height); // Area = 1/2 * base * height
}

int main() {
    float base, height, area;

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    area = calculate_area(base, height);

   
    printf("The area of the right-angled triangle with base %.2f and height %.2f is: %.2f\n", base, height, area);

    return 0;
}
