#include <stdio.h>
union abc
{
    int a;
    char b;
} var;

void main()
{
    var.a = 65;
    int *ptr_a = &var.a;
    char *ptr_b = &var.b;
    printf("a = %d\n", var.a);
    printf("b = %c\n", var.b);
    printf("Address of a : %p\n",*ptr_a);
    printf("Address of b : %p\n",*ptr_b);
}