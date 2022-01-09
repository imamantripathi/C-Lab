#include <stdio.h>

void main() {
   float percentage;
   float total_marks = 1200;
   float phy,che,math,eng,hindi;
   float scored;
printf("Enter Marks of 5 Subjects:");
scanf("%f%f%f%f%f",&phy,&che,&math,&eng,&hindi);
scored = phy+che+math+eng+hindi;
   percentage =(scored *100) / total_marks;
   printf("Percentage = %.2f", percentage);
}