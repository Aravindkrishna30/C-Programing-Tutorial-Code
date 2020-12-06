//Copy a string to other string. 
#include <stdio.h>
#include <string.h>
void mystrcpy(char b[],char a[])
{
	int i;
	int len = strlen(a);
    for (i = 0; i <= len; i++) 
	{
        b[i] = a[i];
	}
    b[i] = '\0';
}
int main()
{
    char a[100], b[100];
    char c;
    int i, j = 0, count;
    printf("Enter string:\n");
    gets(a);
    mystrcpy(b,a);
	printf("After copying string to B the string is:%s", b);
    return 0;
}
