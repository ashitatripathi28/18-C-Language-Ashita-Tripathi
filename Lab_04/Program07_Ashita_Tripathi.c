#include <stdio.h>

int main()
{
    float length, breadth, area;

    // Taking length and breadth as input
    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter breadth: ");
    scanf("%f", &breadth);

    // Calculating area
    area = length * breadth;

    // Displaying result
    printf("Area of rectangle = %.2f", area);

    return 0;
}