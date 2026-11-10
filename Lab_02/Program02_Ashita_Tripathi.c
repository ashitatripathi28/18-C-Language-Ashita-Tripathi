#include <stdio.h>
int main() {
    // 1. Variable Declaration and Initialization
    int age = 25;              // Stores whole numbers
    float height = 5.9;        // Stores fractional/decimal numbers
    char grade = 'A';          // Stores a single character (wrapped in single quotes)

    // 2. Printing the values using Format Specifiers
    // %d is for int, %.1f is for float (1 decimal place), %c is for char
    printf("Age: %d years\n", age);
    printf("Height: %f feet\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}