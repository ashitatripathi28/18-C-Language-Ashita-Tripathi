#include <stdio.h>

int main()
{
    float a, b, c, average;

    // Taking three numbers as input
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculating average
    average = (a + b + c) / 3;

    // Displaying result
    printf("Average = %.2f", average);

    return 0;
}