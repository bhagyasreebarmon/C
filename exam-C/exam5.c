/*
determine whether the input characters are uppercase 
letters. If they are uppercase letters, convert them 
to lowercase letters. Otherwise, do not convert them, 
and finally output.
*/
#include<stdio.h>
int main()
{
	char ch;
	printf("enter uppercase letter:\n");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
		ch=ch+32;
	}
	printf("lowercase is:%c",ch);
	return 0;
}
