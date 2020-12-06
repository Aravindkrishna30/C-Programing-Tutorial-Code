#include <stdio.h>

int main()
{
	char ch;
	
	printf("Enter the alphabet:");
	scanf("%c", &ch);
	
	if(ch == 'a'|| ch == 'e' || ch == 'i' ||ch =='o' ||ch == 'u')
	  printf("The character %c is vowel",ch);
	else 
	printf("The character %c is consonence",ch);
	
	
}
