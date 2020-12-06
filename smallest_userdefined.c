#include <stdio.h>

int findsmallest(int b[])
{
	int smallest=9999,i;
	for(i=0;i<5;i++)
	{
		if(b[i]<=smallest)
		{
		    smallest=b[i];
		}
	}
	return(smallest);
}
int main()
{
	int a[5],sum=0,i,results;
	printf("Enter the array elements: \n\t");
	for(i=0;i<5;i++)
	{
		scanf("%d", &a[i]);
	}
	results= findsmallest(a);
	printf("\n Smallest element is %d", results);
	
}
