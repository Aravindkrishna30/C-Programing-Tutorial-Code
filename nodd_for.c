#include <stdio.h>
//ForLoop
void printodd_for(int n)
{
	int i;
	printf("\nUsing for loop Odd numbers upto %d are:", n);
	for(i=1;i<=n;i++)
{
    	if(i%2==1)
    	    printf("\t%d", i);
	}
}

//Whileloop 
void printodd_while(int n)
{
	int i=1;
	printf("\nusing while loop Odd numbers upto %d are:", n);
    while(i<=n)
    {
    	if(i%2==1)
    	    printf("\t%d", i);
    	    i++;
	}
}
int main()
{
	int no;
	printf("enter a number:");
	scanf("%d", &no);
    printodd_for(no);
	printodd_while(no);
}
