#include<stdio.h>
int main()
{
    //Declaring integer
    int num;

    //Ask the user to input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    //If the remainder is 0 when devided by 2, then the number is even
    if(num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);

    return 0;
}