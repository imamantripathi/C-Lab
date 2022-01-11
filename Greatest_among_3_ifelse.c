#include <stdio.h>
void main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    printf("Enter the value of Num1 Num2 Num3 :-\n");
    scanf("%d\n%d\n%d", &num1, &num2, &num3);
    if (num1 >= num2 && num1 >= num3)
    {
        printf("Greatest Number is %d.", num1);
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        printf("Greatest Number is %d.", num2);
    }
    else if (num3 >= num1 && num3 >= num2)
    {
        printf("Greatest Number is %d.", num3);
    }
}