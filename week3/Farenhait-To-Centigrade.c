/*
Fahrenheit to celsius/centigrade
sutro : c/5 = (F-32)/9
ba, c = 5*(F-32)/9
ba, c = (F-32)/1.8     // * 5\9 = 1.8 *
*/
#include<stdio.h>
int main ()
{
	float c,F;
	printf("Enter Farenhait :\n");
	scanf("%f", &F);
	c = (F-32)/1.8;
	printf("Centigrade = %.2f", c);
	return 0;
}
