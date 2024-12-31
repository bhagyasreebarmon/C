/*
input 10 integers and store them in an array, 
and then input 1 number to check if the number is 
in the array.
*/
#include<stdio.h>
int main()
{
	int a[10];
	int i,n,temp=0;
	printf("input 10 number:\n");
	for(i=0;i<=9;i++)
	scanf("%d",&a[i]);
	printf("input a number what you find:\n");
	scanf("%d",&n);
	for(i=0;i<=9;i++)
	if(a[i]==n)
	{
		temp=1;
		break;
	}
	if(temp==1)
	printf("search successful !\n");
	else
	printf("search failed\n");
	return 0;
}

