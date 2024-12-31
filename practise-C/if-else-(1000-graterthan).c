/*
Input an integer and check whether it is greater than 100. If it is
greater than 100, output YES; if it is less than 100, output NO.
*/
#include<stdio.h>
int main()
{
	int a;
	printf("enter a number :\n");
	scanf("%d", &a);
	if(a>100)
	printf("YES");
	else
	printf("NO");
	return 0;
}
