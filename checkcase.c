#include <stdio.h>

void checkcase(char ch)
{
	if(ch>=65 && ch<=90)
	    printf("The character %c is in Upper case", ch);
	    
	else if(ch>=97 && ch<=122)
	    printf("The character %c is in Lower case", ch);
	    
	else
	    printf("The character %c is not 8an Alphabet");
	
	}
	
int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c", &ch);
	checkcase(ch);
}
