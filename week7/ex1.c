/*
Program to input two integers. If both are greater than or 
equal to 100, then output the digits above the hundredth digit. 
Otherwise, output the sum of the two numbers.
For example, input: 111 2222
Then output: Numbers above a hundred digits are: 1 and 22
Another example: input: 11 222
Then output: 11+222=233
*/
#include<stdio.h>
int main() 
{
    int a, b;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Check if both numbers are >= 100
    if (a >= 100 && b >= 100) {
        printf("Numbers above a hundred digits are: %d, %d",a/100,b/100);
    } else {
        // Output the sum of the two numbers
        int sum = a + b;
        printf("%d + %d = %d\n", a, b, sum);
    }
    return 0;
}
