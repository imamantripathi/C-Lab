#include <stdio.h>
 int biggestNumber(int, int, int); // function prototype
int main()
{

    int a, b, c;
    printf("Enter the three numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    // read the numbers from user
    int result = biggestNumber(a, b, c); // function call
    printf("Biggest number is: %d\n", result);
    // display the output on the screen
    return 0;
}
int biggestNumber(int a, int b, int c)
{ // function definition with parameter
    if (a > b)
    {
        if (a > c)
            return a;
        else
            return c;
    }
    else
    {
        if (b > c)
            return b;
        else
            return c;
    }
}