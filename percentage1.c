#include <stdio.h>
#include<conio.h>
void main(){
    float a,b,c,d,e,x,y,z=500;
   
    printf("Enter the Marks of Five subjects:");
    scanf("%f%f%f%f%f", &a,&b,&c,&d,&e);
    x = a+b+c+d+e;
    y =(x*100)/z;
    printf("percentage = %.2f",y);
  
}