#include<stdio.h>
#include<math.h>

int main()
{
	int i, n;
	printf("Enter the number:");
	scanf("%d", &n);
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			printf("Given is not a prime number");
			return(0);
		}
	}
	printf("\n Given Number is Prime number");
}
