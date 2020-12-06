#include <stdio.h>

int main()
{
int number;
printf("enter the number=");
scanf("%d", &number);

while(number<=10)
{
	printf("%d\t", number);
	number++;
	}
	printf("Loop Stopped");	
}
