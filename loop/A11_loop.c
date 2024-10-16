/*
WAP in C to find out and print all prime number lying between 1 to 200
Author: Khushal
Date:
*/

#include <stdio.h>


int is_prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}



int main()
{
    int j,count=0;

    printf("Prime number between 1 to 200 :\n");

     for (j=1; j<=200; j++) {
        if (is_prime(j)) {
            printf("%3d ", j); 
            count++; 
        }
        
        if(count==5){
            printf("\n");
            count=0;
        }
    }

    return 0;
}
