#include <stdio.h>

int main()
{
	float celsius;
	float farh;
	
	printf("Enter the temp in celsius:");
	scanf("%f",&celsius);
	
	farh = (celsius*1.8)+32;
	printf("\n Temp in celsius=%f",farh);
}

