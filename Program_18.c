#include<stdio.h>
int main()
{
    int a,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        sum=sum+i;
    }

    printf("Sum of first %d natural numbers = %d",a,sum);
    return 0;
}