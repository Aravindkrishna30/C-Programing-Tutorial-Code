#include<stdio.h>

int main()
{
	int no1,no2,no3;
	
	printf("enter three numbers:");
	scanf("%d%d%d",&no1,&no2,&no3);
	
	if(no1>=no2 && no1>=no3)
	   printf("Max number=%d",no1);
	
	if(no2>=no1 && no2>=no3)
		printf("Max number=%d",no2);
		
	else
	   printf("Max number=%d",no3);
}
