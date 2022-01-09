#include <stdio.h>
void main(){
    int x,y;
    printf("Enter the Value of X and Y ");
    scanf("%d%d",&x,&y);
    if (x>y)
    {
        printf("X is Greater than Y");
    }
    if (x==y)
    {
        printf("X is equal to Y ");
    }
    if (x<y)
    {
        printf("X is less than Y");
    }
}