/*
Input the side length a of a square
(a is an integer) from the keyboard, 
and output the area s (s=a*a)
*/
#include<stdio.h>
int main()
{
	int a,s;
	printf("enter a square length : \n");
	scanf("%d", &a);
	s = a*a;
	printf("the area is : %d", s);
	return 0;
}
