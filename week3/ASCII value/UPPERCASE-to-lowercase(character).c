/*
UPPERCASE to lowercase
*/
#include<stdio.h>
int main()
{
	
	char uppercase;
	printf("enter any uppercase letter \n");
	scanf("%c", &uppercase);
	printf("the uppercase letter lowercase is %c", (uppercase+32));
}
