#include <stdio.h>
void main()
{
   int principal, year;
   float rate, simpleInterest;
   for (int i = 0; i < 3; i++)
   { // for loop
      printf("Enter the Value of Principle ,Year and rate\n");
      scanf("%d%d%f", &principal, &year, &rate);
      simpleInterest = (principal * rate * year) / 100;
      printf("%f\n", simpleInterest);
   }
}