/*
trivuj er khetrofol = write a program that print the area of triangle
*/
#include<stdio.h>
int main()
{
	int base, height; //base = vumi, height = uccota
	float area;
	printf("enter two number : \n");
	scanf("%d %d", &base,&height);
	area = (float)1/2 * base * height; //trivuj er khetrofol = 1/2(0.5)*vumi*uccota
	printf("the area is : %.2f\n", area);
	return 0;
}
