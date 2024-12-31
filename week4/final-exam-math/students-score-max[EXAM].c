/*
Enter the scores of a group of students 
(end with a negative number), calculate and output 
the highest score
*/
#include<stdio.h>
int main()
{
	int grade,max=0;
	printf("inter score:\n");
	scanf("%d",&grade);
	while(grade>=0)
	{
		if(grade>max)
		max=grade;
		scanf("%d",&grade);
	}
	
	return 0;
}
