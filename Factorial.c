#include <stdio.h>

void main()
{
    int number;
    double fact = 1;
    printf("Enter the Number to find Factorial: ");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        fact = fact * i;
    }
    printf("%0.2f", fact);
}