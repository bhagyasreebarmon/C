/*
input a year/4 digit number and output that ia Lear year 
or not
*/
#include<stdio.h>
int main()
{
	int year;
	printf("enter a year :\n");
	scanf("%d",&year);
	
	if(year%400==0)
	printf("%d is Leap Year\n",year);
	else if(year%4==0 && year%100!=0)
	printf("%d is Yeap Year\n",year);
	else 
	printf("Not Lear Year");
	
	return 0;
}
