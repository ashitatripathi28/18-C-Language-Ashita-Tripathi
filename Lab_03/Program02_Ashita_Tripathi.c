#include <stdio.h>

int main()
{
    char name[50];

    // Taking name as input
    printf("Enter your name: ");
    scanf("%s", name);

    // Displaying the name
    printf("Your name is: %s", name);

    return 0;
}