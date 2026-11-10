#include<stdio.h>
int main()
{
    //Declaring integer
    int num1, num2, sum;

    //Ask the user for input
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    //Calculate the sum
    sum = num1 + num2;

    //Display the result
    printf("The sum of %d and %d is %d", num1, num2, sum);

    return 0;
}