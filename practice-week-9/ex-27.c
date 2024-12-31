/*
the classical mathematical problem: a cock is 
worth five, a hen is worth three, three chickens 
are worth one, and a hundred chickens are worth one 
hundred. How many cocks, hens and chickens are each?
using loop
*/
#include<stdio.h>
int main()
{
	int x,y,z,j=0;
	for(x=0;x<=20;x++)
	for(y=0;y<=33;y++)
	for(z=0;z<=300;z++)
	{
		if(x+y+z==100 && 5*x+3*y+z/3==100)
		printf("%2d:cock=%2d hen=%2d chicken=%2d\n",++j,x,y,z);
	}
	return 0;
}
