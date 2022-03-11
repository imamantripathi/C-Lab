#include <stdio.h>
#include <string.h>
 
struct student 
{
           int id;
           char name[20];
           float percentage;
};
 
void func(struct student *stu1);
 
int main() 
{
	struct student stu1;
 
	stu1.id=21;
	strcpy(stu1.name, "Rambo");
	stu1.percentage = 96.5;
 
	func(&stu1);
	return 0;
}
 
void func(struct student *stu1)
{
	printf(" Id is: %d \n", stu1->id);
	printf(" Name is: %s \n", stu1->name);
	printf(" Percentage is: %f \n", stu1->percentage);
}