#include<stdio.h>
int fib_rec(int num)
{
	if(num==0 || num==1)
	    return(num);
	 return(fib_rec(num-1)+fib_rec(num-2));
}


int main()
{
	int terms,i;
	printf("Enter the number of terms to display:");
	scanf("%d", &terms);
	printf("\n The fibonacci serious :");
	for(i=0;i<=terms;i++)
    {
	printf("\t%d",fib_rec(i));
    }
	return(0);	
}
