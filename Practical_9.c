#include <stdio.h>
#include <conio.h>
void main()
{
    int i = 1;
    printf("\nSquare of 1 to 10 Numbers :\n");
    while (i <= 10)
    {
        printf("\n%d : %d", i, i * i);
        i = i + 1;
    }
    getch();
}
