#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[3][3],b[3][3],c[3][3];
	int i,j;

	printf("Enter values of matrix A:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("\t%d", &a[i][j]);
		}
	}
    printf("\nEnter elemts of matrix B\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("\t%d", &b[i][j]);
		}
	}
	for(i=0; i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];		
			
		}
		
	}
	printf("Matrix addition result is :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
		}	
		return 0;
}
