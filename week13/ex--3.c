/*
Write a program to input 10 numbers at random and 
store them in an array, then input 1 number and find out 
whether the number is in the array.
Input and output example:
Please input 10 numbers: 1 2 3 4 5 6 7 8 9 0
Please input the number to be searched: 5
Search successful!
Please input 10 numbers: 1 2 3 4 5 6 7 8 9 0
Please input the number to be searched: 12
*/
//exam e ache eta
#include<stdio.h>
int main()
{
	int i,search,temp=0;
	int a[10];
	printf("Please input 10 numbers:");
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
	printf("Please input the number to be searched:\n");
	scanf("%d",&search);
	for(i=0;i<=9;i++)
		{
			if(a[i]==search)
		   {	temp=1;
			    break;
			}
	}
	
	if(temp==1)
	printf("Search successful!");
	else
	printf("Search Fail");
	return 0;
}
