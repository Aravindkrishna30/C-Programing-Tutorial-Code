#include <stdio.h>
void number(int n)
{
	int i,j,b=n*n;
	
	for(i=1;i<=b;i++)
	{
	
	  // for(j=1;j<=5;j++)
	    // {
	   
	    	printf("\t%d",i);
	    //	printf("\t%d",j);
		//	break;
	   // }
	     //printf("\t%d",i);
	    printf("\n");
	    
    }
}

int main()
{
	int no;
	printf("enter a number:");
	scanf("%d", &no);
    number(no);

}
