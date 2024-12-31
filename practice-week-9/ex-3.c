/*
 There are 5 students in the class. 
 Count the average scores of each student in 
 three courses.
*/
#include<stdio.h>
int main()
{
	int i;
	float s1,s2,s3, avg,total=0; 
	
	for(i=1;i<=5;i++)
	{
		printf("enter score :\n");
	    scanf("%f%f%f",&s1,&s2,&s3);
		avg=(s1+s2+s3)/3;
		printf("avg=%7.2f",avg);
		total=total+avg;
    }
	return 0; 
}
