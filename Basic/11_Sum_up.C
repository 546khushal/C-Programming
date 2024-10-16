/*
Program to calculate the sum of all integers up to a given number using the formula n*(n+1)/2.
Author: Khushal
Date: 
*/

#include <stdio.h>

int calculate_sum(int n) {
    return (n * (n + 1)) / 2; // Sum = n * (n + 1) / 2
}

int main() {
    int n, sum;

    printf("Enter a  integer: ");
    scanf("%d", &n);

   

    sum = calculate_sum(n);

    printf("The sum of all integers up to %d is: %d\n", n, sum);

    return 0;
}
