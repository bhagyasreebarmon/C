/*
kelvin to farenheit
sutro = 
F= (K-273.15)*9/5 +32
*/
#include<stdio.h>
int main()
{
	float F, k;
	printf("Enter Kelvin : \n");
	scanf("%f",&k);
	F= (k-273.15)*9/5 +32;
	printf("Farenheit= %.2f", F);
	return 0;
}
