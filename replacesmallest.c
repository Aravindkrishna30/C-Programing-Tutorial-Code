#include <stdio.h>

void replacesmallest(int b[])
{
	int smallest=9999,i,index;
	for(i=0;i<5;i++)
	{
		if(b[i]<=smallest)
		{
		    smallest=b[i];
		    index=i;
		}
	}
	b[index]=-1;
}
int main()
{
	int a[5],sum=0,i;
	printf("Enter the array elements: \n\t");
	for(i=0;i<5;i++)
	{
		scanf("%d", &a[i]);
	}
	replacesmallest(a);
	printf("\n New array content is: \n");
	for(i=0;i<5;i++)
	    printf("%d\t",a[i]);
	
}
