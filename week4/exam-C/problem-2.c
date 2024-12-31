   /*
3 x 4 matrix, which requires the program to find out the value of the element with the largest value, as well as the row number and column number.
*/
#include <stdio.h>

int main() 
{
   
   int a[3][4],i,j,row,column,max;
   printf("input a array:\n");
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
 
   
  

    return 0;
}
