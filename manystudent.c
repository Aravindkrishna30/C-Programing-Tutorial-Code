#include<stdio.h>
 struct student
 {
 	int rollno;
 	char name[20];
 	float percent;
 };
 void addstudent(struct student *s)
 {
 	printf("Enter the student Rollno:");
 	scanf("%d", &s->rollno);
 	printf("Enter student Percentage:");
 	scanf("%f",&s->percent);
 	printf("Enter the Name: ");
 	scanf("%s", & s->name);
 	
 }
 void showstudent (struct student s)
 {
    printf("Now Displaying Student Details as:\n");
 	printf("\n Name:%s", s.name);
 	printf("\n RollNumber:%d", s.rollno);
 	printf("\n Marks: %f", s.percent);	
 }
 int main()
 {
 	int i;
 	struct student s[3];
 	for(i=0;i<3;i++)
 	{
 		addstudent(&s[i]);
	 }
 	for(i=0;i<3;i++)
 	{
 		showstudent(s[i]);
	}
 	
 
 }
