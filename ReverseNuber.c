#include <stdio.h>

void main(){
    int num;
    int reverse= 0;
    printf("Enter the number for reverse\n");
    scanf("%d",&num);
    while (num>0)
    {
        int d = num%10;
        reverse = reverse*10+d;
       num = num/10;
    }
    printf("Reverse Number is %d ",reverse);
    

}
