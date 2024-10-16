/*
WAP to accept number from the  user till their sum exceeds 50
Auther:khushal
Date:*/
#include <stdio.h>
#include <conio.h>
void Limit_sum(const int n)
{
    int sum = 0, a;
    while (sum != n)
    {
        while (sum < n)
        {
            printf("Current sum: %d\n", sum);
            printf("Add a number to reach %d: ", n);
            scanf("%d", &a);

            sum += a;
        }

        while (sum > n)
        {
            printf("Current sum: %d\n", sum);
            printf("The sum exceeds %d. Subtract a number to reach %d: ", n, n);
            scanf("%d", &a);

            sum -= a;
        }
    }

    printf("Congratulations! The final sum is exactly %d.\n", n);
}
int main()
{
    int n;
    printf("Enter Table Number:");
    scanf("%d", &n);

    Limit_sum(n);
    return 0;
}