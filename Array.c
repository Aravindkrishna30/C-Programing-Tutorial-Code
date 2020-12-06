#include<stdio.h>

int main()
{
	int a[5], sum=0,i;
	float avg;
	printf("ENTER 5 Nos : \t\n");
	for(i=0;i<5;i++)
	{
		scanf("%d", &a[i]);
		sum=sum+a[i];
	}
	avg=sum/5.0;
	printf("\n Average = %f", avg);
}
