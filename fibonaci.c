#include<stdio.h>
void fib_iter(int num)
{
	int first=0,second=1,next,i;
	for(i=1;i<=num;i++)
	{
		next=first+second;
		first=second;
		second=next;
		printf("\t%d",next);
	}
}


int main()
{
	int terms;
	printf("Enter the number of terms to display:");
	scanf("%d", &terms);
	printf("\n The fibonacci serious :");
	fib_iter(terms);
	return(0);	
}
