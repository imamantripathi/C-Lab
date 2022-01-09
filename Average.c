#include<stdio.h>
int main(){
int phy,che,math,eng,hindi;
int total = 0;
double avg;
float per;
printf("Enter Marks of 5 Subjects:");
scanf("%d%d%d%d%d",&phy,&che,&math,&eng,&hindi);
total = phy+che+math+eng+hindi;
printf("Total Marks: %d",total);
avg=total/5;
printf("Average Marks: %lf",avg);
return 0;
}