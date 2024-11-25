/*
use library function(toupper) to convert lowercase to UPPERCASE character 
*/
#include<stdio.h>
int main()
{
	char lower;
	char upper;
	printf("enter any lowercase letter :\n");
	scanf("%c", &lower);
	upper = toupper(lower); //ekhane toupper er kaj hocche jekono lowercase letter k uppercase e convert kora
	//eti muloto library function hisebe poricito
	printf("the uppercase letter is %c", upper);
}
