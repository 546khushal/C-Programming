/*
Program to calculate simple interest.
Author: Khushal
Date:
*/

#include <stdio.h>

float calculate_simple_interest(const float principal,const float rate,const float time) {
    return (principal * rate * time) / 100; // SI = (P * R * N) / 100
}

int main() {
    float principal, rate, time, simple_interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (per annum): ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);


    simple_interest = calculate_simple_interest(principal, rate, time);

    printf("The simple interest is: %.2f\n", simple_interest);

    return 0;
}
