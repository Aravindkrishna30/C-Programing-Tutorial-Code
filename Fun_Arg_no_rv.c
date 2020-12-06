#include <stdio.h>
void add(int n1,int n2)
{
	int r;
	r=n1+n2;
	printf("\nAddition=%d",r);
	
}

int main()
{
	int no1,no2;
	printf("Enter the two numbers:");
	scanf("%d%d", &no1,&no2);
	add(no1,no2);
	
}
