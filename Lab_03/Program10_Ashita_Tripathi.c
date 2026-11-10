#include <stdio.h>

int main()
{
    float length, breadth;

    // Taking length and breadth as input
    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter breadth: ");
    scanf("%f", &breadth);

    // Displaying dimensions
    printf("Length: %.2f\n", length);
    printf("Breadth: %.2f", breadth);

    return 0;
}