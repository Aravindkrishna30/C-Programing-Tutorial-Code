#include <stdio.h>
int add(int n1,int n2)

{
	int r;
	r=n1+n2;
	return(r);
}
int main()
{
	int no1,no2,r;
	printf("Enter two nos:");
	scanf("%d%d",&no1, &no2);
	r=add(no1,no2);
	printf("\nAddition=%d", r);
}
