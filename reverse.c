#include<stdio.h>
#include<stdlib.h>

int reverseno(int n)
{
    int last_digit,sum=0;
	while(n!=0)
	{
		last_digit =n%10;
		sum=sum*10 +last_digit;
		n=n/10;
		}	
		return(sum);
}
int main()
{
	int n;
	printf("Enter number:");
	scanf("%d", &n);
	printf("Reverse number is:%d",reverseno(n));
	return 0;
}
