/*
4. Write a program to input an integer n (1<n<=10), then 
input n integers, sort them from small to large and output 
them (using bubble sort).
Input and output examples:
Number of input data: 5
Input 5 numbers: 3 2 5 1 4
From small to large: 1 2 3 4 5
Number of input data: 10
Input 10 numbers: 5 7 3 2 4 8 0 9 1 6
From small to large: 0 1 2 3 4 5 6 7 8 9
*/
#include<stdio.h>
int main()
{
	int i,temp,j,n;
	int a[10];
	printf("please input n:\n");
	scanf("%d",&n);
	printf("please input %d numbers: \n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		printf("\n");
	for(i=0;i<n-1;i++)
	for(j=0;j<n-1-i;j++)
	if(a[j]>a[j+1])
	{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
	printf("the shorted number :");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
