//Reverse given string. 
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
char* myreverse(char a[])
{
	int i;
	int k=strlen(a)-1;
	char *b;
	b=(char*)malloc(strlen(a)*sizeof(a));
	for (i = 0; i <= strlen(a); i++) 
	{
		printf("%c",a[k]);
        b[i]=a[k];
        k--;
    }
    b[i]='\0';
    return(b);
}
int main()
{
    char a[100];
    char *b;
    int i = 0, k;
    printf("Enter string:\n");
    scanf("%s", a);
    b=myreverse(a);
	return 0;
}
