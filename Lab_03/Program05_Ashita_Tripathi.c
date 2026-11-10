#include <stdio.h>

int main()
{
    float marks;

    // Taking marks as input
    printf("Enter your marks: ");
    scanf("%f", &marks);

    // Displaying marks
    printf("Your marks are: %.2f", marks);

    return 0;
}