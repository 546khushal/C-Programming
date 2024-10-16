/*
Program to calculate compound interest.
Author: Khushal
Date: [Insert the current date here]
*/

#include <stdio.h>
#include <math.h> // For the pow() function

// Function to calculate compound interest
float calculate_compound_interest(float principal, float rate, int years) {
    return principal * pow((1 + rate / 100), years) - principal;
}

int main() {
    float principal, rate, compound_interest;
    int years;

    printf("Enter the principal amount (P): ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (r): ");
    scanf("%f", &rate);

    printf("Enter the number of years (n): ");
    scanf("%d", &years);

    compound_interest = calculate_compound_interest(principal, rate, years);

    printf("The compound interest for principal %.2f, rate %.2f%% over %d years is: %.2f\n", principal, rate, years, compound_interest);

    return 0;
}
