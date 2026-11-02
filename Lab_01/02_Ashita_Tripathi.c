#include<stdio.h>

int main()
{
    int a, b, sum, sub, multi, div;
    printf("Enter two numbers=");
    scanf("%d,%d", &a, &b);
    sum = a + b;
    printf("sum = %d\n", sum);
    sub = a - b;
    printf("sub = %d\n", sub);
    multi = a * b;
    printf("multi = %d\n", multi);
    div = a / b;
    printf("div = %d\n", div);
    return 0;
}
