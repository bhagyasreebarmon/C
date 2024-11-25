/*
Input three integers a, b, c and output the smallest number.
*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three number:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(b>a && c>a)
    printf("%d is the smallest number",a);
    else if(a>b && c>b)
    printf("%d is the smallest number",b);
    else
    printf("%d is the smallest number",c);
    return 0;
}
 
