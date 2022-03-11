#include <stdio.h>
void main()
{
    int number = 0;
    printf("Enter the Number to find factor: ");
    scanf("%d", &number);
    printf("\n");
    printf("Factors: ");
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            printf("%d  ", i);
        }
    }
}