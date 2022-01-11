#include <stdio.h>
void main()
{
    int num = 0;
    int sum = 0;
    int temp = 0;
    printf("Enter a number to check: ");
    scanf("%d",&num);
    temp = num;
    while (num>0)
    {
        int d = num % 10;
        sum = sum * 10 + d;
        num = num / 10;
    }
    if (temp == sum)
        printf("Number is Pallindrome");
    else
        printf("Number is Not Pallindrome");
}