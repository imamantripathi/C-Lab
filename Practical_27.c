#include <stdio.h>
#include <string.h>

union Data
{
    int i;
    float f;
    char str[20];
};

int main()
{

    union Data data;

    data.i = 10;
    data.f = 220.5;
    strcpy(data.str, "C Programming");

    printf(" Address - data.i : %d\n", data.i); // memory address of i
    printf(" Address - data.f : %f\n", data.f); // memory address of f
    printf("data.str : %s\n", data.str);

    return 0;
}