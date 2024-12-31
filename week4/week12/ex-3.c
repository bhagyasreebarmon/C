#include<stdio.h>
int main()
{
	int x,y,z,j=0;
	for(x=0;x<=10;x++)
	for(y=0;y<=5;y++)
	{
		z=10-x-2*y;
		if(z%5==0&&z>=0)
    printf("1yuan:%-2dzhang 2yuan:%-2dzhang 5yuan:%-2dzhang\n",++j,x,y,z/5);
    }
    return 0;
}

