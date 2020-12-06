#include<stdio.h>

void swap(int p, int q)
{
	int tmp;
	tmp=p;
	p=q;
	q=tmp;
}

int main()
{
	int p,q;
	printf("Enter the first and second number");
	scanf("%d%d", &p,&q);
	swap(p,q);
	printf("\nAfter swapping first number is:%d \t second number is: %d", p,q);
	return 0;
}
