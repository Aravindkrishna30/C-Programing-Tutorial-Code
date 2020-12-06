//String length
#include <stdio.h>
#include <stdlib.h>

int strll(char b[])
{
	int i=0;
    while (b[i] != '\0') 
	{
        i++;
    }
	return(i);
}

int main()
{
    char *a;
    int len;
    printf("Enter string:\n");
    a=(char*)malloc(100*sizeof(char));
    scanf("%s", a);
    len =strll(a);
    printf("length is %d", len);
    return 0;
}
