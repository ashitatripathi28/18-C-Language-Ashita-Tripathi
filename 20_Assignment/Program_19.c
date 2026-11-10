#include<stdio.h>
int main()
{
    int n, original,remainder, reverse=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    original=n;

    while(n!=0)
    {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n/=10;
    }

    if(original==reverse)
        printf("It is a Palindrome number.");
    else
        printf("It is not a Palindrome number.");
    
        return 0;
}