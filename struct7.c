#include<stdio.h>

struct student 
{
	int roll;
	float per;
	char name[30];
};

void addstud(struct student *s)
{
	printf("Enter student Rollnumber:");
	scanf("%d",&s->roll);
	printf("Enter student Percentage:");
	scanf("%f",&s->per);
	printf("Enter student Name:");
	scanf("%s",s->name);
}

void showstud(struct student s)
{
	printf("\n Now Displaying Students Details as:\n");
	printf("\n Name:%s",s.name);
	printf("\n RollNumber:%d",s.roll);
	printf("\n Marks:%f",s.per);
}

void updatemark(struct student *s)
{
	int nmarks;
	printf("\n Enter new marks:");
	scanf("%d",&nmarks);
	s->per=nmarks;
}

int main()
{
	int i,troll;
	int n;
	struct student *s[10];
	printf("\nHow many students are in Class:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		s[i]=(struct student*)malloc(sizeof(struct student));
		addstud(s[i]);
	}
	
	printf("\nWhich student marks you want to modify. Enter roll number:");
	scanf("%d",&troll);
	for(i=0;i<n;i++)
	{
		if(s[i]->roll==troll)
		{
			updatemark(s[i]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		showstud(*s[i]);
	}
}
