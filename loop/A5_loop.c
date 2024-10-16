/*
WAP in C to check if a given number is prime or not.
Author: Khushal
Date:
*/

#include <stdio.h>

// Function to check if a number is prime
int  is_prime(int n) {
    if (n <= 1) {
        return 0;  
    }
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0 ) {
            return 0;  
        }
    }
    
    return 1;  
    }

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (is_prime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    
    return 0;
}
