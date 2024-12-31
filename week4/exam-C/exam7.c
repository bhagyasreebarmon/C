/*
input 10 integers and store them in an array, and then input 1
number to check if the number is in the array.
*/
#include<stdio.h>
int main()
{
	int a[10]={67,87,32,4,6,8,9,3,23,56};
	int x,temp=0,i;
	printf("x:");
	scanf("%d",&x); 
	for(i=0;i<10;i++)
	{ if(a[i]==x)
	  {  temp=1;  //temp as a flag variable
	  }
	}
	if(temp==0)
	  printf("search fail!");
	else 
	  printf("search successful!");
	return 0;
}
