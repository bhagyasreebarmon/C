/*
kelvin to celsius
sutro = C=K-273.15
*/
#include<stdio.h>
int main()
{
	float c, k;
	printf("Enter Kelvin : \n");
	scanf("%f",&k);
	c = (k-273.15);
	printf("celsius= %.2f", c);
	return 0;
}t
