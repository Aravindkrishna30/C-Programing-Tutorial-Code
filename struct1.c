#include<stdio.h>

struct student 
{
	int roll;
	float per;
	char name[30];
};

int main()
{
	struct student s;
	printf("Enter student Rollnumber:");
	scanf("%d",&s.roll);
	printf("Enter student Percentage:");
	scanf("%f",&s.per);
	printf("Enter student Name:");
	scanf("%s",s.name);
	
	printf("\n Now Displaying Students Details as:\n");
	printf("\n Name:%s",s.name);
	printf("\n RollNumber:%d",s.roll);
	printf("\n Marks:%f",s.per);
	
}
