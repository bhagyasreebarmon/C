/*
2+22+222+……+2222222222 output this formula result using loop
*/
#include<stdio.h>
int main()
{
	int i;
	float p=2;
	for(i=22;i<=2222222222;i=i*10+2)
	p=p+i;
	printf("p=%.0f\n",p);
	return 0;
}
