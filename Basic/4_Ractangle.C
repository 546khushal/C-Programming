/*
Program to calculate the area of a rectangle.
Author: Khushal
Date: [Insert the current date here]
*/

#include <stdio.h>

float calculate_area(float length, float breadth) {
    return length * breadth;
}

int main() {
    float length, breadth, area;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    area = calculate_area(length, breadth);

    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
}
