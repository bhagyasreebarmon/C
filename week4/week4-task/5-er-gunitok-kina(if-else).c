/*
Write a program to input an integer at random and determine whether
the number is a multiple of 5(5 er gunitok kina). If it is, output YES, otherwise output NO
*/
#include<stdio.h>
int main()
{
	int number;
	printf("enter a number :\n");
	scanf("%d",&number);
	if(number%5 ==0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
