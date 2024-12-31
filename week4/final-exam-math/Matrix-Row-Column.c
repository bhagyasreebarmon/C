/*
 has a 3 × 4 matrix, which requires the program to find out the value of the element with the largest value, as well as the row number and column number.

*/
#include <stdio.h>

int main() 
{ 
   //int a[10]={0,1,2,3,4,5,6,7,8,9};
   //int i,x,temp=0;
   int a[3][4],i,j,max,row,column;
   printf("input row and column:\n");
   for(i=0;i<=2;i++)
   for(j=0;j<=3;j++)
   
   
     scanf("%d",&a[i][j]);
     max=a[0][0];
     row=0;
     column=0;

   for(i=0;i<=2;i++)
   for(j=0;j<=3;j++)
   if(a[i][j]>max)
   {
     
     max=a[i][j];  
     row=i;
     column=j;
   }
   
   printf("max:%d\nrow:%d\ncolumn:%d\n",max,row,column);
  
   
   
     /*{
         if(a[i]==x)
         {
             temp=1;
             break;
         }
     }
     if(temp==1)
     printf("search successful !\n");
     else
     printf("search failed\n");
       
   
//printf("sum=%d",sum);
    //scanf("%c",&grade);
    
    
    /*if(a>b)
    {
     t=a;
    a=b;
    b=t;   
    }
    if(a>c)
    {
        t=a;
        a=c;
        c=t;
    }
    if(b>c)
    {
        t=b;
        b=c;
        c=t;
    }*/
    
    //ch1='A';
    //ch2=ch1+32;
    // Write C code here
    //printf("failed");
   // printf("ASCII code:%d",ch2);

    return 0;
}
