/*
2. Input two integers a and b to exchange them.
*/
#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d,%d",&a,&b);
    c=a;
	a=b;
	b=c;
	printf("a=%d,b=%d",a,b);
	return 0;
}
