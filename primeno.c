#include<stdio.h>
#include<math.h>

int main()
{
	int x;
	int i, v1,v2, count=0;
	printf("Please enter a number(only +tive integers)");
	scanf("%d", &x);
	
	v1=ceil(sqrt(x));
	v2=x;
	for(i=2; i<=v1;i++)
	{
		if(v2%i==0)
		  count=1;
		  
		}
		if((count==0 && v2!=1) || v2==2 || v2==3)
		   printf("%d is a prime no",v2);
		   else
		   printf("%d is not a prime no", v2);
		   return 0;

}
