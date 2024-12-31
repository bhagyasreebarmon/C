/*
input 10 numbers randomly to find out the maximum and 
minimum values.
*/
#include<stdio.h>
#define N 10
int main()
{
	int i,a[N],max,min;
	for(i=0;i<=9;i++)
	scanf("%d",&a[i]);
	max=min=a[0];
	for(i=0;i<=9;i++)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
	printf("max=%d",max);
	printf("min=%d",min);
	return 0;
}
