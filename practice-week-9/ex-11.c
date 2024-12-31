/*
Write a program to input a positive integer
and output it in reverse order using do while loop
*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d\n",&n);
	do{
		printf("%d",n%10);
		n=n/10;
	}while(n!=0);
	return 0;
}
