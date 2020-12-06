#include<stdio.h>
#include<stdlib.h>

void perfectno(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
    {
    	if(n%i==0)
    	{
    		sum=sum+i;
		}
	}
	if(sum==n)
	  printf("%d is perfect number",n);
	else
	  printf("%d is not perfect number",n);
}
int main()
{
	int n, sum=0,i;
	printf("Enter number:");
	scanf("%d", &n);
	perfectno(n);
	return 0;
}
