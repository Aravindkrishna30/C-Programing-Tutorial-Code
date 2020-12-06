#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[3][2],b[2][3],c[3][3],i,j,k,sum=0;
	
	printf("Enter first matrix elements (3x2)\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<2; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter second matrix elements (2x3)\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			sum=0;
			for(k=0; k<3;k++)
			{
			    sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
		printf("\n Matrix muliplication is: \n");
		for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
			{
				printf("%d\t", c[i][j]);
			}
			printf("\n");
		}		
}
	
		

