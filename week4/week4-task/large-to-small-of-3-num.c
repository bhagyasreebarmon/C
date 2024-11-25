/*
Write a program to input three integers a, b, c from the keyboard and output them in 
descending order(large to small).
C language source program
*/
#include<stdio.h>
int main()
{
	int a,b,c,t;
	printf("enter three integer number :\n");
	scanf("%d%d%d", &a,&b,&c);
		if(a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	if(a<c)
	{
		t=a;
		a=c;
		c=t;
	}
	if(b<c)
	{
		t=b;
		b=c;
		c=t;
	}
	printf("a=%d b=%d c=%d",a,b,c);
	return 0;
}
