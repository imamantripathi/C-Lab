#include <stdio.h>
void main(){
    int N=0;
    printf("How Many Number you want to ckeck:- ");
    scanf("%d",&N);
for (int i = 1; i <= N; i++)
{
    float number;
    printf("Enter the value for Number %d:- ",i);
    scanf("%f",&number);
    float reci = (1/number);
    printf("The Reciprocal of Number entered by you is:%0.2f.\n",reci);    
}


}
