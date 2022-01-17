//1
//010
//10101
//0101010
#include <stdio.h>
void main()

{
    int i, j, k = 1;
    for (i = 1; i <= 7; i = i + 2)
    {
        for (j = 1; j <= i; j++)
        {
            if (k % 2 == 0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
            k++;
        }
        printf("\n");
    }
}