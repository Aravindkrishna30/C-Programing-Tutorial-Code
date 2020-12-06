#include<stdio.h>
int main()
{
	FILE *fptr;
	char ch;
	char fname[20];
	printf("Enter file to write:");
	scanf("%s", fname);
	fptr=fopen(fname, "a");
	
	printf("write content (Press 'Z' to stop):");
	fflush(stdin);
	scanf("%c", &ch);
	while(ch!='Z')
	{
		fprintf(fptr, "%c",ch);
		scanf("%c", &ch);
	}
	fclose(fptr);
	return 0; 
}
