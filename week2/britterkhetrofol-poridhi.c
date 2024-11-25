/* Input any value of the circle radius r from the keyboard, 
and write a program to find the approximate values 
of the circle's circumference c (c=2*3*r) and area 
s (s=3*r*r) (the result is an integer).
*/
#include<stdio.h>
int main(){
	int r,c,s;
	printf("enter the value of r=");
	scanf("%d", &r);
	c=2*3*r;
	s=3*r*r;
	printf("c=%d\n",c);
	printf("s=%d",s);
	return 0;
}
