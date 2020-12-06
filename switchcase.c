#include <stdio.h>

int main()
{
	int n1,n2;
	float result;
	char op, ch;
	printf("enter the two number n1 and n2:");
	scanf("%d%d",&n1,&n2);
	printf("which of operations to perform");
	scanf(" %c",&op);
	switch(op)
	{
	    case '+':
		     result= n1+n2;
     	    break;	
     	
        case '-':
    	     result= n1-n2;
             break;
        case '*':
         	result= n1*n2;
        	break;
        case '/':
    	     result=n1/n2;
    	     break;
       default:
    	     printf("Wrong Opreator");
    
	}
	printf("Result=%f", result);
	
}
	

