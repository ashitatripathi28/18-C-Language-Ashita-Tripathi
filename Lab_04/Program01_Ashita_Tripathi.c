#include <stdio.h>

int main()
{
    int a, b, sum;

    // Taking two numbers as input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Calculating sum
    sum = a + b;

    // Displaying result
    printf("Sum = %d", sum);

    return 0;
}