#include<stdio.h>
int main()
{
    int a = 5, b = 10, c;
    c = a++ + ++b;
    printf("%d %d %d",c,a,b);
    return 0;
}