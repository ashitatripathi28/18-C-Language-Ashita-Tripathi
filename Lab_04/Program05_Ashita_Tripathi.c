#include <stdio.h>

int main()
{
    int a, b, remainder;

    // Taking two integers as input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Calculating remainder
    remainder = a % b;

    // Displaying result
    printf("Remainder = %d", remainder);

    return 0;
}