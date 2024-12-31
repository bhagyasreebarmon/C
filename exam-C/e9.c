/*
Program to output all odd numbers between 100-200 
(numbers that cannot be divided by 2 are called odd numbers) 
(requires 5 numbers to be output per line and separated by 2 spaces).
*/
#include<stdio.h>
int main()
{
	int i,count=0;
	
	for(i=100;i<=200;i++)
	{
		if(i%2!=0)
		printf("%-5d",i);
		count++;	
		if(count%5==0)
		printf("\n");
		
	}
	return 0;
}
