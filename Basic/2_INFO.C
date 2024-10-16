/*
Program to print Name, Address, and Birth Date.
Author: Khushal
Date:
*/

#include<stdio.h>


void print_details(char name[], char address[], char birth_date[]) {
    printf("\n--- User Details ---\n");
    printf("Name: %s\n", name);
    printf("Address: %s\n", address);
    printf("Birth Date: %s\n", birth_date);
}

int main() {
    char name[50], address[100], birth_date[20];

  
    printf("Enter your Name: ");
    scanf("%s", name); 

    printf("Enter your Address: ");
    scanf(" %[^\n]%*c", address);  

    printf("Enter your Birth Date (dd/mm/yyyy): ");
    scanf("%s", birth_date);  

    // Call function to print user details
    print_details(name, address, birth_date);

    return 0;
}
