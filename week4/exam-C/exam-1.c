/*
input two integers, x and y, and output them in descending order.
*/
#include<stdio.h>
int main()
{
	int x,y, temp;
	printf("please enter two integer x and y:\n");
	scanf("%d%d",&x,&y);
	if(x<y)
	{
		temp=x;
		x=y;
		y=temp;
	}
	printf("the descending order = %d %d",x,y);
	return 0;
}
