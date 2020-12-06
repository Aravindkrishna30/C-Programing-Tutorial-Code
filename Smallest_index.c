#include<stdio.h>
int main()
{
	int a[5],sum=0,i;
	//int smallest=9999;
	int smallest_index=-1;
	printf("Enter array elements=");
	for(i=0;i<5;i++)
	{
		scanf("%d", &a[i]);
	}
	int smallest=a[0];
	for(i=0;i<5;i++)
	{
	    if(a[i]<=smallest)
	        {
		        smallest=a[i];
		        smallest_index=i;
		
	        }
    }
    printf("\n Smallest element is %d found at position %d", smallest,smallest_index);


}
