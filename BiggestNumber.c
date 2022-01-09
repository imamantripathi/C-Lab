#include <stdio.h>
void main(){
    int num1,num2,num3;
    printf("Enter the three Numbers \n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>=num2 && num1>num3)
    {
        printf("The Biggest number is %d",num1);
    }
    if(num2>num1 && num2>=num3)
    {
        printf("The Biggest number is %d",num2);
    }
    if(num3>=num1 && num3>num2 || num1==num3)
    {
        printf("The Biggest number is %d",num3);
    }
}