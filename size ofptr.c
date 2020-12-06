#include<stdio.h>
int main()
{
	int no1=10;
	char ch='A';
	int *ptr= &no1;
	char *cptr= &ch;
	printf("\n Integer pointer size of value = %d pointer=%d", sizeof(*ptr),sizeof(ptr));
	printf("\n Integer pointer size of value = %d pointer=%d", sizeof(*cptr),sizeof(cptr));
}
