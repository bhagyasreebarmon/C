/*
input two integer number which is output the largest number
*/
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter two number :\n");
	scanf("%d%d",&num1, &num2);
	if(num1>num2)
	printf("%d is largest number\n",num1);
	else if(num2>num1)
	printf("%d is the largest number\n",num2);
	else 
	printf("the number is equal");
	return 0;
}
