/*
print data types size
int = 4bytes
float = 4bytes
double = 8bytes
char = 1byte
*/
#include<stdio.h>
int main()
{
	int i;
	float f;
	double d;
	char c;
	printf("the size of integer is %d bytes\n", sizeof(i));
	printf("the size of float is %d bytes\n", sizeof(f));
	printf("the size of double is %d bytes\n", sizeof(d));
	printf("the size of character is %d byte\n", sizeof(c));
}
