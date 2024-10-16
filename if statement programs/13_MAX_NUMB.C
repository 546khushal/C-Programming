/*
WAP to find out Minimum  number among Three number
Date:
Author:Khushal
*/
#include<stdio.h>

// Function to find the minimum of three numbers
int find_max(int num1, int num2, int num3) {
    int max = num1;  

    if (num2 > max) {
        max = num2;  
    }

    if (num3 > max) {
        max = num3;  
    }

    return max;  
}

int main() {
    int num1, num2, num3, max;

    // Input three numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    // Call the function to find the minimum
    max = find_max(num1, num2, num3);

    // Print the result
    printf("The minimum number among %d, %d, and %d is: %d\n", num1, num2, num3, max);

    return 0;
}
