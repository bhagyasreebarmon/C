/*
the monkey picked several peaches on the first day, 
ate half of them immediately, and ate one more. On the 
second day, he ate half of the rest peaches, and ate one 
more. Later, he eat half of the peaches left over from the 
previous day and another one. By the 10th day, there was 
only one peach left. How many peaches were picked on the 
first day? using loop
*/
#include<stdio.h>
int main()
{
	int i,s=1;
	for(i=9;i>=1;i--)
	{
		s=(s+1)*2;
	
	printf("the=%d day peach is %d\n",i,s);
}
	return 0;
}
