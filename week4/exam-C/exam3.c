/*
input three integers, x , y and z and output them in ascending order.
*/
#include<stdio.h>
int main()
{
	int x,y,z,temp;
	printf("enter three integer:\n");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y)
	{
		temp=x;
		x=y;
		y=temp;
	}
	if(x>z)
	{
		temp=x;
		x=z;
		z=temp;
	}
	if(y>z)
	{
		temp=y;
		y=z;
		z=temp;
	}
	printf("escending order is: %d %d %d",x,y,z);
	return 0;
}
