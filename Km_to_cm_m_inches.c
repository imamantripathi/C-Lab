#include <stdio.h>
void main()
{
    int km = 0;
    long cm = 0;
    long m = 0;
    double inches = 0;
    printf("Enter the Length in Kilometer: ");
    scanf("%d", &km);
    cm = 100000 * km;
    m = km * 1000;
    inches = 39370.1 * km;
    printf("The Length in Kiloeter: %d km\n", km);
    printf("The Length in Meter: %d m\n", m);
    printf("The Length in Centimeter: %d cm\n", cm);
    printf("The Length in Inches: %0.2f inches\n", inches);
}