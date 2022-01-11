#include <stdio.h>
void main(){
    int fahrenheit=0;
    int celsius=0;
    printf("Enter the Temprature in Fahrenheit: ");
    scanf("%d",&fahrenheit);
    celsius=(fahrenheit-32)*(5/9);
    printf("The Temprature in Celsius %d.",celsius);
}