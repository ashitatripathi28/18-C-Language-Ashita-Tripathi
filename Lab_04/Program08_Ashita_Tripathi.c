#include <stdio.h>

int main()
{
    float length, breadth, perimeter;

    // Taking length and breadth as input
    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter breadth: ");
    scanf("%f", &breadth);

    // Calculating perimeter
    perimeter = 2 * (length + breadth);

    // Displaying result
    printf("Perimeter of rectangle = %.2f", perimeter);

    return 0;
}