/*
input three integers, x , y and z and output them in descending order.
*/
#include<stdio.h>
int main()
{
	int x,y,z,temp;
	printf("enter three integer:\n");
	scanf("%d%d%d",&x,&y,&z);
	if(x<y)
	{
		temp=x;
		x=y;
		y=temp;
	}
	if(x<z)
	{
		temp=x;
		x=z;
		z=temp;
	}
	if(y<z)
	{
		temp=y;
		y=z;
		z=temp;
	}
	printf("x=%d, y=%d, z=%d",x,y,z);
	return 0;
}
