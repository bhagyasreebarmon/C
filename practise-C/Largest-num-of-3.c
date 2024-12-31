/*
Write a C program, input three numbers a, b, and c, and output the largest number.
C language source program
*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 3 numbers : \n");
	scanf("%d%d%d", &a,&b, &c);
	if(a>=b && a>=c)
	  printf("%d is the largest number", a);
	else if(c>=a && c>=b)
	  printf("%d is the largest number", c);
	else
	  printf("%d is the largest number", b);
	  return 0;
}
