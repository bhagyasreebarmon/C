/*
britter khetrofol and poridhi nirnoy(circle area and Circumference of circle  value)
*/
#include<stdio.h>
int main()
{
	float r,area,circum;
	float PI = 3.14159;
	printf("enter circle radius = \n");
	scanf("%f",&r);
	area = PI*r*r;
	circum = 2*PI*r;
	printf("the area is %f\n", area);
	printf("the circum is %f\n", circum);
	return 0;
}
