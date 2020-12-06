#include<stdio.h>
#include<stdlib.h>
int fact(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return(fact);
}

void strongno(int n)
{
    int last_digit,sum=0;
    int ori_no=n;
	while(n!=0)
	{
		last_digit =n%10;
		sum=sum+fact(last_digit);
		n=n/10;
		}	
		if(sum==ori_no)   
		printf("\n %d is strongno number", ori_no);
		else
		printf("\n %d is Not strongno number", ori_no);
}
int main()
{
	int n;
	printf("Enter number:");
	scanf("%d", &n);
	strongno(n);
	return 0;
}
