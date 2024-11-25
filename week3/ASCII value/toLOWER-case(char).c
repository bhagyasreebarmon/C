/*
use the library function(tolower) to convert a character uppercase to lowercase
*/
#include<stdio.h>
int main()
{
	char uppercase_letter;
	char lowercase_letter;
	printf("enter any uppercase letter :\n");
	scanf("%c", &uppercase_letter);
	lowercase_letter = tolower(uppercase_letter);
	printf("the lowercase letter is : %c", lowercase_letter);
}
