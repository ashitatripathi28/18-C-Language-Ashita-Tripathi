#include <stdio.h>

int main()
{
    int a, b, difference;

    // Taking two numbers as input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Calculating difference
    difference = a - b;

    // Displaying result
    printf("Difference = %d", difference);

    return 0;
}