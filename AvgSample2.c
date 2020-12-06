#include <stdio.h>

int main()
{
	int num1,num2;
	float avg;
	
	printf("Enter the No1:");
	scanf("%d",&num1);
	
	printf("Enter the No2:");
	scanf("%d",&num2);
	
	avg = (num1+num2)/2.0;
	printf("\nAverage=%f",avg);
}
