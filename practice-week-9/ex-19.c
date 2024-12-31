/*
outputs a number between 100 and 200 that cannot be divided by 3.
using loop
*/
#include<stdio.h>
int main()
{
	int i;
	for(i=100;i<=200;i++)
	{
		if(i%3!=0)
		printf("%5d",i);
	}
	return 0;
}
