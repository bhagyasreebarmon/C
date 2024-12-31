/*
use the principle of sequential search to determine whether 
the specified value is included in the array.
*/
#include<stdio.h>
int main()
{
	int a[10]={67,87,32,4,6,8,9,3,23,56};
	int x,temp=0,i;
	printf("Please enter the value you want to find:");
	scanf("%d",&x); 
	for(i=0;i<10;i++)
	{ if(a[i]==x)
	  {  temp=1;  //temp as a flag variable
	  }
	}
	if(temp==0)
	  printf("Search failed!");
	else 
	  printf("Search successful!");
	return 0;
}

