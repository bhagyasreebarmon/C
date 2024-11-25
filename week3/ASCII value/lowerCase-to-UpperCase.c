/*
write a program to input lowercase letter and print the same letter as a upercase
*/
#include<stdio.h>
int main()
{
	char ch;
	printf("please enter a lowercase letter :\n");
	scanf("%c", &ch);
	printf("the pressed uppercase letter is : %c", (ch - 32));/*ASCII number e lowercase 
	character theke uppercase character er parthokko sob somoy minus (-) 32
	example : b = 98 B = 66. b-A = 32
	ekhon kono user jekono letter input hisebe dile sekhan theke 32 minus hoye jacche so the is 
	oi letter er uppercase letter*/
}
