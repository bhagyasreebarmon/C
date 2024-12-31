/*
duiti number user theke niye setake
subtruction(biyog), multiplication(gun), division(vag), reminder(vagsesh) ber korte hobe
*/
#include<stdio.h>
int main()
{
	int num1, num2, sub, mul, reminder;
	float div;
	printf("enter two number : \n");
	scanf("%d %d", &num1, &num2);
	sub = num1-num2;
	printf("the sub result is %d\n", sub);
	
	mul = num1*num2;
	printf("the mul result is %d\n", mul);
	
	div = (float)num1/num2; //type casting = data type change kore dewake type casting bole
	printf("the div result is %.2f\n", div);
	
	reminder = num1%num2;
	printf("the reminder result is %d\n", reminder);
	return 0;
}
