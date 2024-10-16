/*
Program to calculate the volume of a rectangular prism.
Author: Khushal
Date: 
*/

#include <stdio.h>


float calculate_volume(float length, float breadth, float height) {
    return length * breadth * height; 
}

int main() {
    float length, breadth, height, volume;

    printf("Enter the length of the rectangular : ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangular : ");
    scanf("%f", &breadth);

    printf("Enter the height of the rectangular : ");
    scanf("%f", &height);

    volume = calculate_volume(length, breadth, height);

    printf("The volume of the rectangular prism is: %.2f\n", volume);

    return 0;
}
