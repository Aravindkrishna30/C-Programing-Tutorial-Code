#include<stdio.h>
#include<stdlib.h>

void pallindromeno(int n)
{
    int last_digit,sum=0;
    int ori_no=n;
	while(n!=0)
	{
		last_digit =n%10;
		sum=sum*10 +last_digit;
		n=n/10;
		}	
		if(sum==ori_no)
		printf("\n %d is palindrome number", ori_no);
		else
		printf("\n %d is Not Pallindrome number", ori_no);
}
int main()
{
	int n;
	printf("Enter number:");
	scanf("%d", &n);
	pallindromeno(n);
	return 0;
}
