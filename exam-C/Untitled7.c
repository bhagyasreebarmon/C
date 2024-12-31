/*
input 10 integers and program to get the maximum value.
*/
#include<stdio.h>
int main()
{
	int i,n,max;
	scanf("%d",&n);
	max=n;
	for(i=1;i<=9;i++)
	{
		scanf("%d",&n);
		if(n>max)
		max=n;
	}
	printf("max=%d",max);
	return 0;
}
