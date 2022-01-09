#include<stdio.h>
void main(){
    int number;
    printf("Enter the Number for check ");
    scanf("%d",&number);
    if(number%2==0){
        printf("Number is even");
    }
    if (number%2==1)
    {
        printf("Number is odd");
    }
    
}