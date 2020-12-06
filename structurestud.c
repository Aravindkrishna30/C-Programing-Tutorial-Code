#include<stdio.h>
 struct student
 {
 	int rollno;
 	char name[20];
 	float percent;
 };
 int main()
 {
 	struct student s;
 	printf("Enter the student Rollno:");
 	scanf("%d", &s.rollno);
 	printf("Enter student Percentage:");
 	scanf("%f",&s.percent);
 	printf("Enter the Name: ");
 	scanf("%s", & s.name);
 	
 	printf("Now Displaying Student Details as:\n");
 	printf("\n Name:%s", s.name);
 	printf("\n RollNumber:%d", s.rollno);
 	printf("\n Marks: %f", s.percent);
 }
