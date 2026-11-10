#include <stdio.h>

int main()
{
    char name[50];
    int roll;
    float marks;

    // Taking student details as input
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your roll number: ");
    scanf("%d", &roll);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    // Displaying student details
    printf("\nStudent Details\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", roll);
    printf("Marks: %.2f", marks);

    return 0;
}