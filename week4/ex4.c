#include <stdio.h>     
int main( )           
{  int x=10,a=10;  
   int y;
   x++;
   printf ("x=%d\n",x);    
   y= ++x;
   printf ("x=%d y=%d\n",x,y); 
   y=a;  
   y+=a;    
   printf ("y=%d\n",y);
   y/=a;    
   printf ("y=%d\n",y);     
   y*=a+10;  
   printf ("y=%d\n",y);  
   return 0;        
}       

