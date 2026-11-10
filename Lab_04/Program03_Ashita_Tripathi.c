#include <stdio.h>

int main()
{
    int a, b, product;

    // Taking two numbers as input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Calculating product
    product = a * b;

    // Displaying result
    printf("Product = %d", product);

    return 0;
}