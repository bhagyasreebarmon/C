/*
Please enter the student's grade 
(end with a negative number):80 90 85 -1
The max grade is 90
Please enter the student's grade (end with a negative number):
70 80 95 100 88 90 -80
The max grade is 100
*/
#include<stdio.h>
int main()
{
	int grade, max=0;
	printf("enter grade :\n");
	scanf("%d",&grade);
	while(grade>=0)
	{
		if(grade>max)
		max=grade;
		scanf("%d",&grade);
	}
	printf("The max grade is %d\n",max);
	return 0;
}
