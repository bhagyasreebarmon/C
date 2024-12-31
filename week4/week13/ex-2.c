/*
Write a program to input a positive integer n (1<n<=10), 
then input n integers, swap the smallest value with the 
first number, swap the largest value with the last number, 
and then output the swapped n numbers.
Input and output examples:
Number of input data: 5
Input 5 integers: 5 2 1 10 9
The result after swap is: 1 2 5 9 10
Number of input data: 7
Input 7 integers: 1 4 6 2 3 8 5
The result after swap is: 1 4 6 2 3 5 8
using ARRAY
*/
#include <stdio.h>
int main()
 { int i,a[10],max,min,t,maxc,minc,n;
 printf("please enter a number :\n");
    scanf("%d",&n);
    for (i=0; i<n;i++)  //Use loop to input 10 numbers
        scanf("%d",&a[i]); 
    max=min=a[0];    
    for (i=1; i<n;i++)  
    {
       if(a[i]>max)  {
       	max=a[i]; 
		maxc=i;
	   }
	    
       if(a[i]<min) 
       {
       		    min=a[i];   
				minc=i;
	   }
     }     
    t=a[0];
    a[0]=a[minc];
    a[minc]=t;
    t=a[n-1];
    a[n-1]=a[maxc];
    a[maxc]=t;
    for(i=0;i<n;i++)
    
    printf("%d ",a[i]);
    return 0;
 }


