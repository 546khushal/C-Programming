

/*
WAP to find whether the given number is perfect or not
example: 6 is a perfect number:
            Divisors of 6 are: 1, 2, 3 (excluding 6 itself)
            Sum of divisors: 1+2+3=6
Auther:khushal
Date :
*/
#include<stdio.h>

int isPerfectNumber(int n) {
    int sum = 0;

    // Find divisors and add them
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
            printf(" %d ",i);
        }
    }

    // Check if sum of divisors equals the number
    return (sum == n);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPerfectNumber(num)) {
        printf("\n%d is a perfect number.\n", num);
    } else {
        printf("\n%d is not a perfect number.\n", num);
    }

    return 0;
}