/*
Program input x, calculate and output the value of the following piecewise function y.
y=
x
x<1
2x-1
1<=x<10
3x-1
x>=10

Input and output examples:
Input x: -2.5
f(-2.500000)=-2.5 (result retains 1 decimal place)
Hint: The program should be run 3 times, testing one 
branch each time, that is, inputting the x value in each segment respectively.
*/
#include <stdio.h>
int main() {
    float x, y;

    // Input x
    printf("Input x: ");
    scanf("%f", &x);

    // Calculate y based on the piecewise function
    if (x < 1) {
        y = x;
    } else if (x < 10) {
        y = 2 * x - 1;
    } else {
        y = 3 * x - 1;
    }

    // Output the result with 1 decimal place
    printf("f(%.6f)=%.1f\n", x, y);

    return 0;
}

