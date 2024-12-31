/*
unary operator = (+;  -; a++; a--; ++a; --a)
+ : negative number k positive e convert korbe
- : positive number k negative e convert korbe
*/
#include<stdio.h>
int main()
{
	int x=10;
	printf("%d\n",x++); // output=10
	printf("%d\n",x); // output=11
	printf("%d\n",++x);// output=12
	printf("%d\n",x);// output=12
	printf("%d\n",x--);// output=12
	printf("%d\n",x);// output=11
	printf("%d\n",--x);// output=10
	return 0;
}

