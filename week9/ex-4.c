/*
Write a program to calculate the value of 
1+1/2+1/3+1/4+… If the input is 100, calculate and output 
1+1/2+1/3+…+1/100 (the result is rounded to 2 decimal places). 
(Requires the use of FOR statement)
Input and output examples:
please input an integer number: 5
result=2.28
please input an integer number: 100
result=5.19
*/
#include <stdio.h>

int main() {
    int n,i;
    double sum = 0.0; // Variable to store the sum

    // Prompt the user for input
    printf("please input an integer number: ");
    scanf("%d", &n);

    // Loop to calculate the sum of the series
    for (i = 1; i <= n; i++) {
        sum = sum + 1.0 / i; // Add the reciprocal of i to the sum
    }

    // Output the result rounded to 2 decimal places
    printf("result=%.2f\n", sum);

    return 0;
}

