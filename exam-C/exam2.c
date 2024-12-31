/*
input two integers, x and y, and output them in ascending order.
*/
#include<stdio.h>
int main()
{
	int x,y,temp;
	printf("enter two integer:\n");
	scanf("%d%d",&x,&y);
	if(x>y)
	{
		temp=x;
		x=y;
		y=temp;
	}
	printf("The ascending order : %d %d",x,y);
	return 0;
}
