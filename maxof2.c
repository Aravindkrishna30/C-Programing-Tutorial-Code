#include<stdio.h>

int main()
{
	int no1,no2;
	printf("Enter 2 Nos:");
	scanf("%d%d",&no1,&no2);
	if(no1>no2)
	    printf("Max number=%d",no1);
	else
		printf("Max number=%d",no2);
}
