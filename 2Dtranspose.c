#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[10][10],m,n,i,j,b[10][10];
	
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
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	printf("Transpose Matrix is :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\n");
	}
}
