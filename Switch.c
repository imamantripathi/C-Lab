#include <stdio.h>

int main(){
     int num;
   printf("Enter the Number : ");
   scanf("%d",&num);
   switch (num)
   {
   case 1:
          printf("Your Input is 1 ");
       break;
       case 2:
            printf("Your Input is 2 ");
       break;
       case 3:
            printf("Your Input is 3 ");
       break;
        case 4:
            printf("Your Input is 4 ");
       break;
        case 5:
            printf("Your Input is 5 ");
       break;
        case 6:
            printf("Your Input is 6 ");
       break;
       
   
   default:printf("Wrong Input");
       break;
   }
    return 0;

}