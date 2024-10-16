/*
WAP to  read anumber from 1 to 7 and then print days name from week
Date:
Author:Khushal
*/
#include<stdio.h>


void Find_day(const int n) {
    switch(n) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid Input!\n");
    }
}

int main() {
    int n;
    printf("Enter number to find day (1-7): ");
    scanf("%d", &n);
    
    Find_day(n);
    
    return 0;
}
