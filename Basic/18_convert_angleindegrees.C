/*
Program to convert angle from degrees to radians.
Author: Khushal
Date: 
*/

#include <stdio.h>

#define PI 3.1416 


float convert_to_radians(float degrees) {
    return (degrees * PI) / 180;  
}

int main() {
    float degrees, radians;

   
    printf("Enter the angle in degrees: ");
    scanf("%f", &degrees);

    
    radians = convert_to_radians(degrees);

  
    printf("The angle of %.2f degrees is equivalent to %.4f radians.\n", degrees, radians);

    return 0;
}
