#include <stdio.h>
 #include<conio.h>
 
int main(){
    int year;
    printf("Enter the Year for check\n");
    scanf("%d ",&year);
      if(year%4==0)  
      {
if ( (year%400==0) || (year%100!=0))
{
    printf("%d is a leap Year",year);
}
else
{
 printf("%d is not a leap Year",year);
}
      }
else
{
    printf("%d is not a leap Year",year);
}

      
    
    return 0;
}