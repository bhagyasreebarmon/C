/*
Input the results of the three courses of Student 1 
and output after calculating the average.
*/
#include<stdio.h>
int main()
{
	int s1,s2,s3,i,avg;
	printf("enter score :\n");
	scanf("%d%d%d",&s1,&s2,&s3);
	for(i=1;i<=5;i++)
	{
		avg=(s1+s2+s3)/3;
		printf("avg=%d",avg);
    }
	return 0;
}
