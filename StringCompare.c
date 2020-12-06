// Check if 2 strings are equal. 
#include <stdio.h>
#include <string.h>
void strcmpr(char a[],char b[])
{
	int k=0,flag=1;
	if(strlen(a)==strlen(b))
	{
		for (k = 0; k < strlen(a); k++) 
		{
	            if (b[k] != a[k]) 
				{
	                flag = 1;
	                break;
	            } 
	            flag=0;
	    }
	}
    if (flag == 1)
        printf("strings are not equal");
    else
        printf("strings are equal");
}
int main()
{
    char a[100], b[100];
    int i = 0, k, j = 0, flag = 0;
    printf("Enter first string:\n");
    scanf("%s", &a);
    printf("Enter second string:\n");
    scanf("%s", &b);
	strcmpr(a,b);
    return 0;
}
