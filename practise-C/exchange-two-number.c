/*
Program to input two integers a and b to exchange them
*/
#include<stdio.h>
int main()
{
	int a,b,temporary;
	printf("enter two numbers : \n");
	scanf("%d%d", &a,&b);
	temporary=a;
	a=b;
	b=temporary;
	printf("a = %d, b = %d", a,b);
	return 0;
}
