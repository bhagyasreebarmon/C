#include<stdio.h>
int main ()
{
	float a,b,c;
	printf("enter the number: a,b,c");
	scanf("%f %f %f, &a,&b,&c");
	if(a>b)
	   if(a>c)
	    if(b>c)
	      printf("%f %f %f the assending number is:", c,b,a);
       else {
	        printf("%f %f %f the assending number is:",b,c,a);
        }
        else{
        	printf("%f%f%f the assending number is:",b,a,c);
		}
	else{
		if(b>c)
		if(a>c)
		{
			printf("%f %f %f the assending number is:", c,a,b);
		}
		else
		{
			printf("%f %f %f the assending number is:", a,b,c);
		}
		else
		{
			printf("%f %f %f the assending number is:",a,b,c);
		}
	}
	return 0;
}
