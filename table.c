#include <stdio.h>
void printable(int n)
{
	int i,j;
	printf("\nTable of number %d are as:",n);
	for(j=1;j<=n;j++)
	{
	
	    for(i=1;i<=10;i++)
	    {
	        printf("\t%d",i*j);
	    }
	    printf("\n");
    }
}

int main()
{
	int no;
	printf("enter a number:");
	scanf("%d", &no);
    printable(no);

}
