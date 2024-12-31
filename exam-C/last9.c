/*
Write a program to implement the following function: 
input a positive integer x from the keyboard, determine 
if it is a multiple of 3 and 7, if so, output yes, otherwise 
output no.
*/
#include<stdio.h>
int main()
{
	int num;
	printf("enter positive number:\n");
	scanf("%d",&num);
	if(num%3==0 && num%7==0)
	printf("yes");
	else
	printf("no");
	return 0;
}
