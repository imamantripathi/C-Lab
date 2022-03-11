#include <stdio.h>
void swap(int a, int b);
void swap2(int *a, int *b);
// Using call by value and call by reference
void main()
{
    int num1 = 43;
    int num2 = 12;
    printf("a=%d,b=%d\n", num1, num2);
    // Pass by Values
    swap(num1, num2);
    // call by reference
    swap2(&num1, &num2);
}
void swap(int a, int b)
{
    int x = a;
    a = b;
    b = x;
    printf("a=%d b=%d\n", a, b);
}
void swap2(int *a, int *b)
{
    int x = *a;
    *a = *b;
    *b = x;
    printf("a=%d b=%d\n", *a, *b);
}