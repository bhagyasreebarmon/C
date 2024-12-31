/*
use (Gregory formula) to find the approximate 
value of the PI until it is found that the absolute 
value of a term is less than 10-6 (0.000001)(the term 
is not accumulated).
1-1/3+1/5-1/7
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n=1,sign=1,term=1;
	double pi=0;
	while(fabs(term)>=1e-6)
	{
	pi=pi+term;
	n=n+2;
	sign=-sign;
	term=sign/n;
    }
    pi=pi*4;
    printf("pi=%10.8f\n",pi);
	return 0;
}
