//String length
#include <stdio.h>
#include <stdlib.h>

int strll(char *b)
{
	if(b[0]=='\0')
		return(0);
	else
		return(1+strll(&b[1]));
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
