#include<stdio.h>
int main()
{
    float l,b,area,peri;
    printf("Enter the Length:");
    scanf("%f",&l);
    printf("Enter the Breadth:");
    scanf("%f",&b);
    area = l * b;
    peri = 2 * (l + b);
    printf("Area of the rectangle is %.2f\n", area);
    printf("Perimeter of the rectangle is %f\n", peri);
    return 0;
}