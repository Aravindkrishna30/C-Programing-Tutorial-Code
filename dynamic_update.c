#include<stdio.h>

 struct stud
 {
 	int rollno;
 	char name[20];
 	float percent;
 };
 void addstud(struct stud *s)
 {
 	printf("Enter the student Rollno:");
 	scanf("%d", &s->rollno);
 	printf("Enter student Percentage:");
 	scanf("%f",&s->percent);
 	printf("Enter the Name: ");
 	scanf("%s", & s->name);
 	
 }
 void showstud (struct student s)
 {
    printf("Now Displaying Student Details as:\n");
 	printf("\n Name:%s", s.name);
 	printf("\n RollNumber:%d", s.rollno);
 	printf("\n Marks: %f", s.percent);	
 }
 void updatemark (struct stud *s)
 {
 	int marks;
 	printf("\nEnter the new marks");
 	scanf("%d", &marks);
 	s->percent=nmarks;
 }
int main()
{
	int i,troll;
	int n;
	struct stud *s[10];
	printf(\n "How many student in the class:");
	scanf("%d", &n);
	for(i=0;i<3;i++)
	{
		s[i]=(struct stud*)malloc(sizeof(struct stud));
		addstud(&s[i]);
	}
	printf("\nEnter the roll number of student whose marke to be update:";
	scanf("%d",&troll);
	
	for(i=0;i<3;i++)
	{
		if(s[i].rollno==troll)
		{
			updatemark(&a[i]);
		}
			
	}
}
