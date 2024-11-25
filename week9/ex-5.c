/*
Write a program to calculate and output the value 
of 2+22+222+…+2222222222. (Requires the use of FOR statement)
Input and output examples:
result=2469135872
*/
#include <stdio.h>

int main() {
	int i;
    long long sum = 0; // Variable to store the total sum
    long long term = 0; // Variable to build each term

    // Loop to calculate the sum of the series
    for (i = 1; i <= 10; i++) {
        term = term * 10 + 2; // Build the term (2, 22, 222, ...)
        sum = sum + term;          // Add the term to the sum
    }

    // Output the result
    printf("result=%lld\n", sum);

    return 0;
}

