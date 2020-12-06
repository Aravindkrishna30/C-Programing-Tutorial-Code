#include <stdio.h>

int main()
{
int number;
printf("enter the number=");
scanf("%d", &number);
do
{
	printf("%d\t", number);
	number++;
	} while(number<=10);

	printf("Loop Stopped");	
}
