/*
Write a program to input the score in percentage and output 
the grade corresponding to the score. It is required to 
use IF statement. The grades are as follows: 
90 points and above are A; 80 to 89 points are B; 70 to 79 points 
are C; 60 to 69 points are D; and below 60 points are E.
Input and output examples:
Input Score: 86
86:B
Input Score: 186
data error!
*/
#include <stdio.h>

int main() {
    int score;

    printf("Input Score: ");
    scanf("%d", &score);

    // Check for valid score range
    if (score < 0 || score > 100) {
        printf("data error!\n");
    } else {
        // Determine the grade using if statements
        if (score >= 90) {
            printf("%d: A\n", score);
        } else if (score >= 80) {
            printf("%d: B\n", score);
        } else if (score >= 70) {
            printf("%d: C\n", score);
        } else if (score >= 60) {
            printf("%d: D\n", score);
        } else {
            printf("%d: E\n", score);
        }
    }

    return 0;
}

