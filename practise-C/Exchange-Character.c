/*
Write a program to input any two characters to achieve exchange
*/
#include<stdio.h>
int main()
{
	char ch1,ch2, temporary;
	printf("Enter any two character :\n");
	scanf("%c %c",&ch1, &ch2);
	temporary =ch1;
	ch1=ch2;
	ch2=temporary;
	printf("the exchange character is = %c %c",ch1,ch2);
	return 0;
}
