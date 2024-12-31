/*
input 10 randomly and findout the maximum and minimum value
*/
#include<stdio.h>
#define N 10
int main()
{
	int i,a[N],max,min;
	printf("input 10 number:\n");
	
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
		max=min=a[0];
	for(i=0;i<N;i++)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
	printf("max:%d\nmin:%d\n",max,min);
	return 0;
}
