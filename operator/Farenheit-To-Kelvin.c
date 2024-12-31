/*
farenheit to kelvin
sutro = 
K= ((°F-32)*5)/9+273.15
ba, k =(F-32)*1.8 + 273.15
*/
#include<stdio.h>
int main()
{
	float F, k;
	printf("Enter Farenheit : \n");
	scanf("%f",&F);
	k = (F-32)*5/9+273.15;
	printf("Kelvin= %.2f", k);
	return 0;
}
