/*
2+22+222+……+2222222222 output this formula result using loop
*/
#include<stdio.h>
int main()
{
	float i, p=0;
	for(i=2;i<=2222222222;i=i*10+2)
	p=p+i;
	printf("p=%.0f\n",p);
	return 0;
}
