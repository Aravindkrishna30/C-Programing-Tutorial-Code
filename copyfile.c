#include<stdio.h>
int main()
{
	FILE *fptr1,*fptr2;
	char ch;
	char sfname[20],dfname[20];
	
	printf("Enter the source file name: ");
	scanf("%s", sfname);
	fptr1= fopen(sfname,"r");
	
	printf("Enter type destination file name:");
	scanf("%s", dfname);
	fptr2= fopen(dfname, "w");
	
	while(!feof(fptr1))
	{
		fscanf(fptr1,"%c",&ch);
		printf("%c", ch);
		fprintf(fptr2, "%c", &ch);
	}
	fclose(fptr1);
	fclose(fptr2);
	return 0;
	
	
}														 
