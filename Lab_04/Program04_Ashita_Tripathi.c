#include <stdio.h>

int main()
{
    float a, b, quotient;

    // Taking two numbers as input
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    // Calculating quotient
    quotient = a / b;

    // Displaying result
    printf("Quotient = %.2f", quotient);

    return 0;
}