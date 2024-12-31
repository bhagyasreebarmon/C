/*
determine whether the input characters are lowercase 
letters. If they are lowercase letters, convert them 
to uppercase letters. Otherwise, do not convert them, 
and finally output.
*/
#include<stdio.h>
int main()
{
	char ch;
	printf("enter lowercase letter:\n");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
	{
		ch=ch-32;
	}
	printf("uppercase=%c\n",ch);
	return 0;
}
