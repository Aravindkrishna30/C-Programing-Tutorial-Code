#include<stdio.h>
#include<string.h>

int main()
{
	char a[100], b[100],c[100];
	int len;
	printf("\n Enter a string:");
	scanf("%s", &a);
	len=strlen(a);
	printf("\n string Len=%d",len);
	strcpy(b,a);
	printf("\n String B=%s",b);
	strcat(b,a);
	printf("\n string B=%s", b);
	if(strcmp(a,b)==0)
	{
		printf("\n string A and B are equal");
	}
	else
	{
		printf("\n string A and B are not equal");
	}
    return 0;
}
