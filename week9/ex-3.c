/*
Write a program to calculate and output the 
value of 1+3+5+7+9+11+13+15+17+19. (Requires the use of FOR 
statement) Output example: result=100
*/
#include <stdio.h>
int main() {
    int sum = 0; // Variable to store the sum
    int i;
    // Loop through the first 10 odd numbers
    for (i = 1; i <= 19; i += 2) 
	{
        sum =sum + i; // Add the current odd number to sum
    }

    // Output the result
    printf("result=%d\n", sum);

    return 0;
}

