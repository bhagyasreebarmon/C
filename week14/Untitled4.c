//Example 6.3 assign 0,1,2,3,4,5,6,7,8,9,to 10 array elements. 
//it is required to output in reverse order.
#include <stdio.h>
int main()
 {  int i,a[10];
 for(i=0;i<=9;i++)
 a[i]=i;
 for(i=9;i>=0;i--)
 printf("reverse order=%d",a[i]);
     printf("\n");
     return 0;
 }
/*
Example 6.4 input 10 numbers randomly to find out the maximum 
and minimum values.
*/
#include <stdio.h>
#define N 10  //Symbolic constant
int main()
 { int i,a[N],max,min;
    for (i=0; i<N;i++)  //Use loop to input 10 numbers
    scanf("%d",&a[i]); 
    max=min=0;
    for(i=0;i<N;i++)
    {
    	if(a[i]>max)
    	max=a[i];
    	if(a[i]<min)
    	min=a[i];
	}
    printf("max=%d\n",max);
    printf("min=%d\n",min);
    return 0;
 }




