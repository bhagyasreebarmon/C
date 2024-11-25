/*
output the largest intigers between three intigers
*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three number :\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	printf("%d is largest number",a);
	else if(b>a && b>c)
	printf("%d is largest number",b);
	else
	printf("%d is largest number",c);
	return 0;
}
