#include <stdio.h>

void main()
{
    int range;
    int n1 = 0;
    int n2 = 1;
    printf("Enter the Range of Fabonacci Series:\n");
    scanf("%d", &range);
    printf("\n%d %d", n1, n2); // printing 0 and 1
    for (int i = 2; i < range; ++i)
    {
        int n3 = n1 + n2;
        printf(" %d",n3);
        n1 = n2;
        n2 = n3;
    }
}