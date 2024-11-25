/*
4. Program to input an integer and check whether 
the number is greater than 100. If it is greater than 
100, output YES; if it is less than 100, output NO.
*/
#include<stdio.h>
int main()
{
	int number;
	printf("enter the number=");
	scanf("%d",&number);
	if (number > 100)
	printf("YES");
	else
	printf("NO");
	return 0;
}

