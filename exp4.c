#include<stdio.h>
int main()
{
	int ai[4][2]={
	    	(10,20),
		    (30,40),
		    (50,60),
		    (70,80)
	};
	int k;
	for(k=3; k>=0; k--)
	printf("%d",ai[k][1]);
	return 0;
}
