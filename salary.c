// input from user Basic salary 
// his DA 40% of basic salary 
// his HRA 20% of basic salary
#include<stdio.h>
void main(){
    int basic,DA,HRA;
    double gross;
    printf("Enter the basic salary ");
    scanf("%d",&basic);
    DA=0.04*basic;
    HRA=0.02*basic;
    gross=basic+DA+HRA;
    printf("Output is = %f",gross);


}