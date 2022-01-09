#include <stdio.h>
#include <math.h>
void main(){
    int temp;
    int number;
    int c = 0;
    double sum = 0;
    printf("Enter the Number to check ArmStrong Number\n");
    scanf("%d",&number);
    temp = number;
    int copy = number;
    while (number>0)
    {
        c=c+1;
        number=number/10;
    }
    while (temp>0)
    {
        int d = temp%10;
         sum = sum+pow(d,c);
          temp=temp/10;
    }
     if(sum==copy)
     printf("ArmStrong Number");
     else
     printf("Not a ArmStrong Number");
    
    
}