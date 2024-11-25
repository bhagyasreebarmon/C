/*
convert UPPERCASE to lowercase another way
*/
#include<stdio.h>
int main()
{
    char upperCase;
	char lowerCase;
	printf("please enter any uppercase letter :\n");
	scanf("%c", &upperCase);
	lowerCase = upperCase + ('a'- 'A');/* ekhane 'a' = 97 and 'A' = 65
	a-A = 32. user jodi a letter ti lekhe tahole a er man 97 and (a-A = 32)
	orthat user er letter upperCase + 32 = the main result
	ASCII number e lowercase character theke uppercase character er parthokko sob somoy - 32*/	
	printf("the uppercase letter is %c", lowerCase);
	
}
