/*
write a program that print a floating, double number and character  
*/
#include<stdio.h>
int main()
{
	float num1 = 10.2;
	double num2 = 10.1234567;
	char ch = 'b';
	printf("float number is %.1f\n", num1), /* ekhane float number 6 ghor porjonto 
	print hobe karon float sadharonto 6 ghor porjonto 
    digit print kore etake control korar jonno %.1f\n ba %.2f\n(ami joto ghor porjonto digit print korte cai)
    likhte hobe*/
	printf("double number is %lf\n", num2);
	printf("character is %c", ch);
}
