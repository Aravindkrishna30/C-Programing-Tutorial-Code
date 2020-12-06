//Convert string to lower case
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void convertlower(char str[])
{
	int i=0;
	while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }
}
int main()
{
    char a[100];
    int i = 0;
    printf("Enter string:");
    gets(a);
    convertlower(a);
    printf("The lowercase string is:%s", a);
    return 0;
}
