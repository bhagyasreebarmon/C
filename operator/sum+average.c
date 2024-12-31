/*
operator = write a program that add two number and print the average result
*/
#include<stdio.h>
int main()
{
	
	int num1, num2, sum;
	float average;
	printf("enter two number : ");
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("the sum result is : %d\n", sum);
	
	average = (float)sum/2; /* ekhane sum k float e rupantor kora hoise karon
	hisebe sum and 2 duitai int number but result hisebe float number o aste pare 
	tai 2 and sum er moddhe jekono ektake(sum) float e rupanto kora hoyeche. float + int mile hoy float number
	and float + double mile hoy double number*/
	printf("the average result is %.2f", average);
//	
}
