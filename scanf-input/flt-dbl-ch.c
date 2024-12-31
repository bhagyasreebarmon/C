/*
write a programe that takes a float, double number and character 
*/
#include<stdio.h>
int main()
{
	char ch;
	float num1;
	double num2;
	printf("please enter a character\n");
	scanf("%c",&ch);
	printf("please enter a float number\n");
	scanf("%f", &num1);
	printf("please enter a double number\n");
	scanf("%lf", &num2);
	printf("you wrote \n");
	printf("character : %c\n", ch);
	printf("float : %.1f\n", num1);
	printf("double : %lf\n", num2);
	return 0;
}
