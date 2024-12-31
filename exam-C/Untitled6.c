/*
use the principle of sequential search to determine whether 
the specified value is included in the array.
*/
#include<stdio.h>
int main()
{
	int a[10]={20,5,8,44,68,90,10,25,3,4};
	int x,i,temp=0;
	printf("Please enter the value you want to find:");
	scanf("%d",&x);
	for(i=0;i<=9;i++)
	if(a[i]==x)
	{
		temp=1;
	}
	if(temp==0)
	printf("search failed");
	if(temp==1)
	printf("search succesful!");
	return 0;
}
