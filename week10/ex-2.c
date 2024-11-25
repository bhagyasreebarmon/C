/*
Please input a positive integer: 12345
Positive integer 12345 reverse order is 54321
example:        
      12345 % 10 = 5   output 5   12345 / 10 = 1234
       1234 % 10 = 4   output 4    1234 / 10 = 123
        123 % 10 = 3   output 3     123 / 10 = 12
         12 % 10 = 2   output 2      12 / 10 = 1
          1 % 10 = 1   output 1       1 / 10 = 0 
                      Until 0 end loop
*/
#include<stdio.h>
int main()
{
	int num;
	printf("enter a positive number :\n");
	scanf("%d",&num);
	do
	{
		printf("%d",num%10);
		num=num/10;
	}while(num !=0);
	return 0;
}
