#include<stdio.h>
int main()
{
    float l,b,area,peri;
    printf("Enter the length: ");
    scanf("%f",&l);
    printf("Enter the breadth: ");
    scanf("%f",&b);

    area=l*b;
    peri=2*(l+b);

    printf("Area = %.2f\n",area);
    printf("Perimeter = %.2f",peri);

    return 0;
}