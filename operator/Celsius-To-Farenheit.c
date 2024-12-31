/*
Celsius to Fahrenheit
c/5 = (F-32)/9
ba, (F-32) = 5/9*c
ba, F = 5/9*c + 32 
ba, F = (1.8 * c) + 32
*/
#include<stdio.h>
int main()
{
	float c, F;
	printf("Enter celsius : \n");
	scanf("%f",&c);
	F = (1.8 * c) + 32;
	printf("Farenheit = %.2f", F);
	return 0;
}
