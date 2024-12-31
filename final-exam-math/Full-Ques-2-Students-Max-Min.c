/*
/*
input the grades of several students from the keyboard, 
calculate and output the highest and lowest grades, and end 
the input when a negative number is entered.
*/
#include <stdio.h>

int main() 
{
    int grade,max=-1,min=101;
    printf("input grade:\n");
   
    while(1)
    {
      scanf("%d",&grade);
      if(grade<=0)
      {
          break;
      }
      if(grade>max)
      max=grade;
      
      if(grade<min)
      min=grade;
    }
    
    
    // Write C code here
    printf("max:%d\nmin:%d",max,min);

    return 0;
}
