/*WAP to check whether tringle is scales,isosceles or equilateral tringle
auther:khushal
Date:
*/

#include<stdio.h>

// Function to determine the type of triangle
void check_triangle_type(int side1, int side2, int side3) {
    if (side1 == side2 && side2 == side3) {
        printf("The triangle is an Equilateral triangle.\n");
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("The triangle is an Isosceles triangle.\n");
    }
    else {
        printf("The triangle is a Scalene triangle.\n");
    }
}

int main() {
    int side1, side2, side3;

    // Input the three sides of the triangle
    printf("Enter the first side of the triangle: ");
    scanf("%d", &side1);

    printf("Enter the second side of the triangle: ");
    scanf("%d", &side2);

    printf("Enter the third side of the triangle: ");
    scanf("%d", &side3);

    // Check if the sides form a valid triangle
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        // Call the function to check the type of triangle
        check_triangle_type(side1, side2, side3);
    }
    else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
