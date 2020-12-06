#include <stdio.h>

int main()
{
	int Number;
	int Results;
	
	printf("Enter the number:");
	scanf("%d", &Number);
	
	Results = Number%2?0:1;
	
	if(Results==1)
	printf("Number is Even");
	else
	printf("Number is Odd");
}
