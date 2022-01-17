#include <stdio.h>
int maximum(int num1,int num2,int num3);
void main(){
    int num1=0,num2=0,num3=0;
printf("Enter the three Number to find maximum: \n");
scanf("%d%d%d",&num1,&num2,&num3);
printf("\n");
printf("The Maximum Number between three is : %d",maximum(num1,num2,num3));
}
int maximum(int num1,int num2,int num3){
     int num = num1>=num2?num1>=num3?num1:num2>=num1:num2>=num3?num2:num3>=num1?num3>=num2:num3;
return num;
}