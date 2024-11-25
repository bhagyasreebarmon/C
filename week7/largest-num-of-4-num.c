/*
Program to input any four numbers n1, n2, n3, n4 and output the largest number among them.
Input and output example:
Input n1, n2, n3, n4: 5 20.5 15 8
max=20.50
*/
#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter 4 number :\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    
    if ((a>b)&&(a>c)&&(a>d))
    {printf(" largest is %d",a);}

    else if ((b>a)&&(b>c)&&(b>d))
    {printf(" largest is %d",b);}

    else if ((c>a)&&(c>b)&&(c>d))
    {printf(" largest is %d",c);}

    else {printf("largest is %d",d);}
    return 0;
}
