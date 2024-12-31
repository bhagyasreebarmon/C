/*
Write a program to implement the following function: 
input a positive integer x from the keyboard, determine 
if it is a multiple of 3 and 7, if so, output yes, otherwise
 output no.
*/
#include<stdio.h>
int main()
{
	int x;
	printf("x:\n");
	scanf("%d",&x);
	if(x%3==0 && x%7==0)
	printf("yes\n");
	else
	printf("no\n");
	return 0;
}

