#include<stdio.h>

int fact(int n)
{
	int i;
	int fact_value=1;
	for(i=1;i<=n;i++)
	{
		fact_value=fact_value*i;
	}
	return(fact_value);
}

int main()
{
	int no,result;
	printf("Enter a number:");
	scanf("%d",&no);
	result = fact(no);
	printf("\nFactorial of number %d is = %d",no,result);
}
