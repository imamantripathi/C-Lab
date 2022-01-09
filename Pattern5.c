//    *
//   ***
//  *****
// *******
//*********
// *******
//  *****
//   ***
//    *

#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the Value of rows: ");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {

        for (int space = 1; space <= (rows - i); space++)
        {
            printf(" ");
        }

        for (int star = 1; star <= (2 * i - 1); star++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = rows - 1; i >= 1; i--)
    {
        for (int space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
