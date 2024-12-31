/*
Enter any value of the circle radius
r from the keyboard (r is a decimal), 
and write a program to find the approximate value of 
the circle's circumference
c (c=2*3.14*r) and area s (s=3.14*r*r) (the result is a decimal)
*/
#include<stdio.h>
int main()
{
	float r,c,s;
	printf("enter a number : \n");
	scanf("%f",&r);
	c = 2*3.14*r;
	printf("the circumference result is = %f\n", c);
	s=3.14*r*r;
	printf("the area is = %f",s);
	return 0;
}
