#include <stdio.h>

int main()
{
    float a, b;

    // Taking two floating-point numbers
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    // Displaying the numbers
    printf("First number: %.2f\n", a);
    printf("Second number: %.2f", b);

    return 0;
}