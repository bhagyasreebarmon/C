//1+1/3+1/5+1/7+1/9+1/11
#include<stdio.h>
int main()
{
	int i,p=1;
	for(i=3;i<=11;i++)
	p=1/i;
	printf("p=%d\n",p);
	return 0;
}
