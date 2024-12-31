/*
Some places need to carry bricks. It is known that 
three bricks are carried by one man, two by one woman 
and one by two children.How many kinds of moving methods 
are there for 45 people to move 45 bricks?
using loop
*/
#include<stdio.h>
int main()
{
	int x,y,z,j=0;
	for(x=0;x<=45;x++)
	for(y=0;y<=45;y++)
	for(z=0;z<=45;z++)
	{
		if((x+y+z==45)&&(x*3+y*2+z*0.5==45))
		printf(" man=%d\n women=%d\n children=%d\n",x,y,z);
	}
	
	return 0;
}
