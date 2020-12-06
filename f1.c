#include <stdio.h>
int main()
{
    FILE *fptr;
	char ch;
	char fname[20];
	printf("Enter file to read:");
	scanf("%s",fname);
	fptr = fopen(fname, "r");
	while((ch = getc(fptr))!=EOF)
	        printf("%c", ch);
	fclose(fptr);
	return 0;
}

