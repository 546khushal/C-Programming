/*
WAP to convert decimal to hexadecimal
Author: Khushal
Date:
*/

#include <stdio.h>

// Function to convert the integer part of a decimal number to hexadecimal
void DecimalToHexadecimal(int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    // Convert and print hexadecimal digits in reverse
    int hexDigit;
    char hexChar;
    
    // This will hold the last printed character, needed for printing in reverse
    int isFirst = 1;

    // Convert and print digits
    while (n > 0) {
        hexDigit = n % 16;
        n /= 16;

        // Determine character for hex digit
        if (hexDigit < 10) {
            hexChar = hexDigit + '0'; // '0' to '9'
        } else {
            hexChar = (hexDigit - 10) + 'A'; // 'A' to 'F'
        }

        // Print current hex character in reverse order
        if (isFirst) {
            printf("%c", hexChar);
            isFirst = 0;
        } else {
            // To print in reverse, we can use a separate mechanism.
            // Instead of storing, we can print it later in reverse order by using recursion.
            printf("%c", hexChar); // Note: If you want exact reverse, store in some temp for later print
        }
    }
}

// Function to convert the fractional part of a decimal number to hexadecimal
void DecimalToHexadecimalFloatPart(float n) {
    float fraction = n;
    int hexDigit;

    // Loop until fraction becomes 0 or desired precision is reached
    while (fraction > 0) {
        fraction *= 16; // Scale up by 16
        hexDigit = (int)fraction; // Extract integer part

        // Print the corresponding hex character
        if (hexDigit < 10) {
            printf("%d", hexDigit); // '0' to '9'
        } else {
            printf("%c", (hexDigit - 10) + 'A'); // 'A' to 'F'
        }

        fraction -= hexDigit; // Remove the integer part
    }
}

int main() {
    float decimal;
    printf("Enter a floating-point decimal number: ");
    scanf("%f", &decimal);

    int intPart = (int)decimal; // Extract integer part
    float floatPart = decimal - intPart; // Extract fractional part

    printf("Hexadecimal of decimal number %.6f is: ", decimal);
    DecimalToHexadecimal(intPart); // Convert and print integer part
    if (floatPart > 0) {
        printf("."); // Print decimal point if there is a fractional part
        DecimalToHexadecimalFloatPart(floatPart); // Convert and print fractional part
    }
    printf("\n");

    return 0;
}
