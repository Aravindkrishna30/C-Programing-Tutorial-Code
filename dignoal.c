#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[10][10],m,n,i,j,b[10][10];
	int sum=0;
	
	printf("Enter values for m and n:");
	scanf("\t%d\t%d", &m,&n);
	printf("\n Enter matrix elements\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("\t%d", &a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i=j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("\n Sum of diagonal element are:%d",sum);
}
