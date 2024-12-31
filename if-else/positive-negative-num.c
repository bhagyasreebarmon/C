/*
input a number that is output positive or negative number
*/
#include<stdio.h>
int main()
{
	int a;
	printf("enter a number :\n");
	scanf("%d",&a);`
	if(a>0)
	printf("%d is a positive number\n",a);
	else if(a<0)
	printf("%d is a negative number\n",a);
	else 
	printf("zero");
	return 0;
}
