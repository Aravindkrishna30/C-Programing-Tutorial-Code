#include<stdio.h>

int main()
{
	int no1=10,no2=20;
	int *ptr;
	ptr= &no1;
	printf("\n Value of no1:%d",*ptr);
	ptr= &no2;
	*ptr=30;
	printf("\n Value of no2:%d",no2);

}
