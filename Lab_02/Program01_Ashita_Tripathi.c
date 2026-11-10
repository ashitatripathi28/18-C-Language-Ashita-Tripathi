#include<stdio.h>
int main()
{
     float principal, rate, time, interest;

    // Reading inputs from the user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest (per annum): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculating simple interest
    interest = (principal * rate * time) / 100;

    // Displaying the result up to 2 decimal places
    printf("\nCalculated Simple Interest: %.2f\n", interest);

    return 0;
}