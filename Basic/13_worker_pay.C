/*
Program to calculate weekly pay based on hourly pay rate and hours worked.
Author: Khushal
Date: 
*/

#include <stdio.h>


float calculate_weekly_pay(float hourly_rate, int hours_worked) {
    return hourly_rate * hours_worked;
}

int main() {
    float hourly_rate, weekly_pay;
    int hours_worked;

    
    printf("Enter the hourly pay rate: ");
    scanf("%f", &hourly_rate);


    printf("Enter the number of hours worked in a week: ");
    scanf("%d", &hours_worked);

    weekly_pay = calculate_weekly_pay(hourly_rate, hours_worked);

    printf("The weekly pay for %.2f per hour and %d hours worked is: %.2f\n", hourly_rate, hours_worked, weekly_pay);

    return 0;
}
