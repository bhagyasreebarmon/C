/*
s=1!+2!+3!+……+20! solve this problem using loop
*/
#include<stdio.h>
int main()
{
	int i;
	double s=0,t=1;
	for(i=1;i<=20;i++)
	{
		t=t*i;
		s=s+t;
	}
	printf("s=%e",s);
	return 0;
}
