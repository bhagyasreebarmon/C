#include<stdio.h>
int main()
{
	float base, height, area;
	printf("enter Base number \n");
	scanf("%f", &base);
	
	printf("enter Height number \n");
	scanf("%f", &height);
	
	area = 0.5*base*height;
	printf("the area is = %.1f", area);
	return 0;
}
