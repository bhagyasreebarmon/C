/*
Enter any letter and output the letter is capital letter 
or small letter
*/
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any letter :\n");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z')
	printf("%c is small letter\n",ch);
	else if(ch>='A' && ch<='Z')
	printf("%c is capital letter",ch);
	else
	printf("This is not letter");
	
	return 0;
}
