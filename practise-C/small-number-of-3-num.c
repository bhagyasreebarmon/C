/*
Program to
input three integers a, b, c and 
output the smallest number.
*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three number :\n");
	scanf("%d%d%d", &a, &b, &c);
	if(a<=b && a<=c)
	printf("%d is the smallest number\n", a);
	else if(b<=a && b<=c)
	printf("%d is the smallest number\n", b);
	else
	printf("%d is the smallest number", c);
}
