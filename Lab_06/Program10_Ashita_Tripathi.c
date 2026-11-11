#include <stdio.h>

int main()
{
    int i, j, num;

    for(i = 0; i < 5; i++)
    {
        for(j = 1; j <= 5 - i; j++)
        {
            printf("  ");
        }

        num = 1;

        for(j = 0; j <= i; j++)
        {
            printf("%4d", num);

            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}