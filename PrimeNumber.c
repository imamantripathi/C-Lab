#include <stdio.h>
int prime(int num);
void main()
{
    int number = 0;
    printf("Enter the Number to check");
    scanf("%d", &number);
    int check = prime(number);
    if (check == 0)
    {
        printf("Not a Prime Number");
    }
    else
    {
        printf("Prime Number");
    }
}
int prime(int num)
{
    int c = 0;
    if (num == 0 || num == 1)
        return 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            c++;
    }
    if (c == 2)
    {
        return 1;
    }
    else
        return 0;
}