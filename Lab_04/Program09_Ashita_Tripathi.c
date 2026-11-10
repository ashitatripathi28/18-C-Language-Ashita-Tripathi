#include <stdio.h>

int main()
{
    float side, area;

    // Taking side as input
    printf("Enter side of square: ");
    scanf("%f", &side);

    // Calculating area
    area = side * side;

    // Displaying result
    printf("Area of square = %.2f", area);

    return 0;
}