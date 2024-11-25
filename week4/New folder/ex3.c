#include <stdio.h>
int main()
{
    int x, y;
    printf("enter a number \n");
    scanf("%d",&x);
	y=x*x;
    printf("%d=%d*%d",y,x,x);
    printf("%d*%d=%d",x,x,y);

    return 0;
}

