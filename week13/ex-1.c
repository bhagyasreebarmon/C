/*
1. Write a program to use an array to store the 
ten numbers 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 in sequence, 
first output them in order, then output them in reverse 
order using ARRAY1
*/
#include<stdio.h>
int main()
{
	int i;
	int a[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for(i=0;i<=9;i++)
		printf("%2d",a[i]);
		printf("\n");
	for(i=9;i>=0;i--)
	printf("%2d",a[i]);
	return 0;
}
