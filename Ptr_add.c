#include<stdio.h>

int main()
{
	int no1,no2,sum;
	int *ptr1, *ptr2;
	printf("\nEnter the two number: \t");
	scanf("%d%d", &no1, &no2);
	ptr1= &no1;
	ptr2= &no2;
	sum= *ptr1 + *ptr2;
	printf("\nSum=%d",sum);
}
