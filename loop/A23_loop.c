/*
WAP to accept amount paid as number (integer) and display it in word*/
#include <stdio.h>

// Function to convert a number less than 1000 to words
void convertToWords(int n) {
    // Handle cases from 0 to 19
    if (n == 0) {
        printf("Zero");
        return;
    } else if (n == 1) {
        printf("One ");
    } else if (n == 2) {
        printf("Two ");
    } else if (n == 3) {
        printf("Three ");
    } else if (n == 4) {
        printf("Four ");
    } else if (n == 5) {
        printf("Five ");
    } else if (n == 6) {
        printf("Six ");
    } else if (n == 7) {
        printf("Seven ");
    } else if (n == 8) {
        printf("Eight ");
    } else if (n == 9) {
        printf("Nine ");
    } else if (n == 10) {
        printf("Ten ");
    } else if (n == 11) {
        printf("Eleven ");
    } else if (n == 12) {
        printf("Twelve ");
    } else if (n == 13) {
        printf("Thirteen ");
    } else if (n == 14) {
        printf("Fourteen ");
    } else if (n == 15) {
        printf("Fifteen ");
    } else if (n == 16) {
        printf("Sixteen ");
    } else if (n == 17) {
        printf("Seventeen ");
    } else if (n == 18) {
        printf("Eighteen ");
    } else if (n == 19) {
        printf("Nineteen ");
    } 
    // Handle cases for tens (20 to 99)
    else if (n >= 20 && n < 30) {
        printf("Twenty ");
        if (n % 10 != 0) {
            convertToWords(n % 10);
        }
    } else if (n >= 30 && n < 40) {
        printf("Thirty ");
        if (n % 10 != 0) {
            convertToWords(n % 10);
        }
    } else if (n >= 40 && n < 50) {
        printf("Forty ");
        if (n % 10 != 0) {
            convertToWords(n % 10);
        }
    } else if (n >= 50 && n < 60) {
        printf("Fifty ");
        if (n % 10 != 0) {
            convertToWords(n % 10);
        }
    } else if (n >= 60 && n < 70) {
        printf("Sixty ");
        if (n % 10 != 0) {
            convertToWords(n % 10);
        }
    } else if (n >= 70 && n < 80) {
        printf("Seventy ");
        if (n % 10 != 0) {
            convertToWords(n % 10);
        }
    } else if (n >= 80 && n < 90) {
        printf("Eighty ");
        if (n % 10 != 0) {
            convertToWords(n % 10);
        }
    } else if (n >= 90 && n < 100) {
        printf("Ninety ");
        if (n % 10 != 0) {
            convertToWords(n % 10);
        }
    } 
    // Handle cases for hundreds (100 to 999)
    else if (n >= 100 && n < 1000) {
        convertToWords(n / 100);
        printf("Hundred ");
        if (n % 100 != 0) {
            convertToWords(n % 100);
        }
    } 
}

int main() {
    int amount;

    // Accept amount from user
    printf("Enter the amount (in numbers): ");
    scanf("%d", &amount);

    // Call function to convert amount to words
    printf("Amount in words: ");
    convertToWords(amount);
    printf("\n");

    return 0;
}
