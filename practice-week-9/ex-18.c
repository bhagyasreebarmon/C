/*
among the 1000 students in the whole department, 
collecting charitable donations ends when the total 
amount reaches 100000 yuan. Count the number of 
donations at this time and the average number of 
donations per person. using loop
*/
#include<stdio.h>
#define SUM 100000
int main()
{
	float amount,total=0,avg;
	int i;
	for(i=1;i<=1000;i++)
	{
		printf("enter amount :");
		scanf("%f",&amount);
		total=total+amount;
		if(total>=SUM)break;
	}
	avg=total/i;
	printf("num=%d\navg=%10.2f\n",i,avg);
	return 0;
}
