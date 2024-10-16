/*
Program to perform addition, multiplication, and division on two integers and float numbers.
Author: Khushal
Date: [Insert the current date here]
*/

#include <stdio.h>

// Function to perform float operations and return the results
float add_floats(float float1, float float2)
{
    return float1 + float2;
}

float multiply_floats(float float1, float float2)
{
    return float1 * float2;
}

float divide_floats(float float1, float float2)
{
    if (float2 != 0.0)
    {
        return float1 / float2;
    }
    else
    {
        return -1; 
    }
}

int main()
{

    float float1, float2;

    printf("Enter first float number: ");
    scanf("%f", &float1);

    printf("Enter second float number: ");
    scanf("%f", &float2);

    float float_sum = add_floats(float1, float2);
    float float_product = multiply_floats(float1, float2);
    float float_division = divide_floats(float1, float2);

    
    printf("\n--- Float Operations ---\n");
    printf("Addition: %.2f + %.2f = %.2f\n", float1, float2, float_sum);
    printf("Multiplication: %.2f * %.2f = %.2f\n", float1, float2, float_product);
    if (float_division != -1)
    {
        printf("Division: %.2f / %.2f = %.2f\n", float1, float2, float_division);
    }
    else
    {
        printf("Division: Division by zero is not allowed.\n");
    }

    return 0;
}
