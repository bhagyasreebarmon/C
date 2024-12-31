/*
Write a program to input any lowercase letter 
and output the corresponding uppercase letter and its ASCII code
*/
#include<stdio.h>
int main()
{
	char lowercase;
	char uppercase;
	printf("Enter a lowercase letter\n");
	scanf("%c", &lowercase);
	uppercase = toupper(lowercase);
	printf("the uppercase letter is = %c", uppercase);
}
