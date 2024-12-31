/*
celsius to kelvin
sutro = K =°C+273.15
*/
#include<stdio.h>
int main()
{
	float c, k;
	printf("Enter celsius : \n");
	scanf("%f",&c);
	k = c+273.15;
	printf("Kelvin = %.2f", k);
	return 0;
}
