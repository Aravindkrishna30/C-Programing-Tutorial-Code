//Count number of words, vowells, characters, and upper case letters in given string. 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void counts(char s[])
{
    int i = 0, wc = 1, uc = 0, vc = 0;
	int len = strlen(s);
    for (i = 0; i < len; i++) 
	{
        if (isspace(s[i]))
            wc++;
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            vc++;
        if (isupper(s[i]))
            uc++;
    }
	printf("\nwords are:%d", wc);
    printf("\ncharacters are:%d", len);
    printf("\nuppercase letters are:%d", uc);
    printf("\nvowels are:%d", vc);
}
int main()
{
    char a[100];
    printf("Enter string:\n");
    gets(a);
    counts(a);
	return 0;
}
