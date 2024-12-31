/*
Enter a letter and output the letter is vowel
or consonent
*/
#include<stdio.h>
int main()
{
	char ch;
	printf("enter a letter :\n");
	scanf("%c",&ch);
	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'
	|| ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
	printf("%c is vowel\n", ch);
	else
	printf("%c is consonent", ch);
	return 0;
}
