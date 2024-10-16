/*
Program to convert distance from kilometers to meters and feet.
Author: Khushal
Date:
*/

#include <stdio.h>


float convert_to_meters(float kilometers) {
    return kilometers * 1000;  // 1 kilometer = 1000 meters
}


float convert_to_feet(float kilometers) {
    return kilometers * 3280.84;  // 1 kilometer = 3280.84 feet
}

int main() {
    float kilometers, meters, feet;

    
    printf("Enter the distance between two cities in kilometers: ");
    scanf("%f", &kilometers);

   
    meters = convert_to_meters(kilometers);
    feet = convert_to_feet(kilometers);

  
    printf("The distance of %.2f kilometers is equivalent to:\n", kilometers);
    printf("%.2f meters\n", meters);
    printf("%.2f feet\n", feet);

    return 0;
}
