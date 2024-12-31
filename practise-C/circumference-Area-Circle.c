/*
Enter any value of the circle radius r from the 
keyboard and write a program to find the approximate values 
of the circle's circumference c (c=2*3*r) and area s (s=3*r*r) 
(the result is an integer)
*/
#include<stdio.h>
int main()
{
	int c,r,s;
	printf("Enter a number :\n");
	scanf("%d", &r);
	c=2*3*r;
	printf("the circumference is : %d\n", c);
	s= 3*r*r;
	printf("the area is : %d", s);
	return 0;
}
