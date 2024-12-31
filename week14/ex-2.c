/*
assign 0,1,2,3,4,5,6,7,8,9,to 10 array elements. 
it is required to output in reverse order.
*/
#include<stdio.h>
int main()
{
	int i, a[10];
	for(i=0;i<=9;i++)
		a[i]=i;
		for(i=9;i>=0;i--)
		printf("%d ",a[i]);
		printf("\n");
	
	return 0;
}
