/*
trivuj er 3 bahur dorgho dewa ache. trivuj er khetrofol ber korte hobe
khetrofol/area =  sqrt ((s-a)*(s-b)*(s-c));
s = (a+b+c)/2;
*/
#include<stdio.h>
int main()
{
	double a,b,c,s,area;
	printf("enter three number : \n");
	scanf("%lf%lf%lf", &a, &b, &c);
	s= (a+b+c)/2;
	area = sqrt (s*(s-a)*(s-b)*(s-c));
	printf("the area is : %.2lf", area);
	return 0;
}

