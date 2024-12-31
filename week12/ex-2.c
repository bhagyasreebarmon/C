#include<stdio.h>
int main()
{
	int i, count=0;
	for(i=100;i<=200;i++){
		if(i%2==0)
		{
			printf("%5d",i);
			count++;
			if(count%10==0)
			printf("\n");
		}
	}
	return 0;
}
