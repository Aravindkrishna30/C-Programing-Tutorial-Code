#include <stdio.h>

int findfact(int n)
{
	//recursive function
	if(n<=1)
	 return(1);
	else
	  return(n*findfact(n-1));

    //for loop function
    
	/*int i;
	int fact=1;
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return(fact);*/
}
	
int main()
{
	int no,result;
	printf("Enter a number: ");
	scanf("%d",&no);
	result=findfact(no);
	printf("\nFactorial of number %d is = %d",no,result);

}
