/*
convert lowercase to UPPERCASE another way
*/
#include<stdio.h>
int main()
{
    char lowerCase;
    char upperCase;
	printf("please enter any lowercase letter :\n");
	scanf("%c", &lowerCase);
	upperCase = lowerCase - ('a'- 'A');/* ekhane 'a' = 97 and 'A' = 65
	a-A = 32. user jodi a letter ti lekhe tahole a er man 97 and (a-A = 32)
	orthat user er letter lowercase - 32 = the main result
	ASCII number e lowercase character theke uppercase character er parthokko sob somoy - 32*/	
	printf("the uppercase letter is %c", upperCase);
	
}
