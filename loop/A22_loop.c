/* WAP to print all number and sum of all the integer 
that are greater then 100 and lessthan 200 and are divisible by 7
Auther:khusal
Date:
*/
#include <stdio.h>
int sumDivisibleBy7(int start, int end) {
    int sum = 0; 

    
    for (int i = start; i <end; i++) {
        if (i % 7 == 0) { 
            printf("%d\n", i); 
            sum += i; 
        }
    }

    return sum; 
}

int main() {
    int start = 101; // Starting value
    int end = 200;   // Ending value

    int sum = sumDivisibleBy7(start, end);

   
    printf("Sum of all numbers greater than 100 and less than 200 that are divisible by 7: %d\n", sum);
    
    return 0;
}