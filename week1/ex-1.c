//output the largest one between two integers
#include <stdio.h>

int main() 
{
    int a,b,max;
    printf("enter two intigers :\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    max=a;
    else
    max=b;
    printf("%d is largest number\n",max);

    return 0;
}
