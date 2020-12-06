#include<stdio.h>

int main()
{
	int a[5],sum=0,i;
	int search;
	printf("Enter arrray elements:");
	//for loop for enter number
	for(i=0;i<5;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n Which element to search=");
	scanf("%d", &search);
	//for loop for search
	for(i=0;i<5;i++)
	{	
		if(a[i]==search)
		{
			printf("\n Element found at position %d" , i);
			return(0);
		}
	}
			printf("\n Element not present in the array %d" , i);

}
