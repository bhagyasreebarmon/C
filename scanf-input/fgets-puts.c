/*
gets(): Reads a string from the input (unsafe and deprecated). It does not check the buffer size.
puts(): Outputs a string to the console and adds a newline automatically.
fgets(): A safer alternative to gets() that limits the number of characters read.
*/

#include <stdio.h>
int main()
{
	char string[100]; /* ekhane string er character hobe 100 ta*/
   //input from the users / scanf er alternative version
   printf("Enter a string: ");
   fgets(string, sizeof(string), stdin);
   puts("you entered : \n");
   puts(string);
   return 0;
}


