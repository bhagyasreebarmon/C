/*
Please input a line character :
Hello 1,2,3
Letter:5(Capital:1 Lowercase: 4)
Spaces:1
Digital:3
Other:2
*/
#include <stdio.h>
int main( )
{ 
  char c;  
  int letter=0, capital=0, lower=0, space=0, digital=0, other=0;
  printf("Please input a line character :\n");  
  while((c=getchar()) != '\n')
  {
    if( (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') )  
    {  
      letter++;       
      if ( c >= 'a' && c <= 'z' )   
        lower++; 
      else if ( c >= 'A' && c <= 'Z' )  
        capital++; 
    }
    else if( c == ' ' )   
      space++;      
    else if( c >= '0' && c <= '9' )   
      digital++;     
    else
      other++;   
  }
  printf("Letter: %d (Capital: %d Lowercase: %d)\n", letter, capital, lower);
  printf("Spaces: %d\nDigital: %d\nOther: %d\n", space, digital, other);
  return 0; 
}


