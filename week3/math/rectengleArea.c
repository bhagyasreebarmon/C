/*
ayotokhetrer khetrofol nirnoy. khetrofol = dorgho*prostho
rectangle area = length*width
*/
#include<stdio.h>
int main()
{
	double length, width, area;
	printf("enter two values : \n");
	scanf("%lf %lf", &length, &width);
	area = length*width;
	printf("the rectengle area is = %.2lf\n", area);
	return 0;
}
