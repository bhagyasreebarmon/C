/*
1+1/3+1/5+1/7+1/9+1/11 output this formula result using loop
*/
#include<stdio.h>
int main()
{
	int i;
	float p=1;
	for(i=3;i<=11;i=i+2)
	p=p+1.0/i;
	printf("p=%f\n",p);
	return 0;
}
