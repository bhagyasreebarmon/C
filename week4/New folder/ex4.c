#include <stdio.h>
int main()
{
	int a,b,c,d, num, sum;
	printf("enter one number\n");
	scanf("%d", &num);
	a= num/1000;
	b= num/100%10;
	c= num/10%10;
	d= num%10;
	sum= a+b+c+d;
	printf ("answer is: %d+%d+%d+%d=%d\n",a,b,c,d,sum);
    return (0);
}
