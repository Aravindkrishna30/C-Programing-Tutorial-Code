#include<stdio.h>
#include<stdlib.h>

int genericroot(int n)
{
	int last_digit,sum;
	while(n>=10)
	{
		sum=0;
		while(n!=0)
		{
			last_digit=n%10;
			sum=sum+last_digit;
			n=n/10;
		}
		if(sum>=10)
		n=sum;
		else
		    break;
	}
	return(sum);
}
int main()
{
	int n;
	printf("Enter number:");
	scanf("%d", &n);
	printf("Generic root of number is:%d",genericroot(n));
	return 0;
}
