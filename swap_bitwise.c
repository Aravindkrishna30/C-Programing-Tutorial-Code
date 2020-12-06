#include<stdio.h>

void swap(int *p, int *q)
{
	*p= *p ^ *q;
	*q= *p ^ *q;
	*p= *p ^ *q;
}

int main()
{n
	int p,q;
	printf("Enter the two numbers:");
	scanf("%d%d", &p,&q);
	swap(&p,&q);
	printf("\n After swapping first no is: %d \t second no is: %d", p,q);
	return 0;
}
