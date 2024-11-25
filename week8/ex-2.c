/*
Write a program to input the score in percentage and output the 
grade corresponding to the score. The switch statement is required. 
The grades are as follows: 90 points and above are A; 80 to 89 
points are B; 70 to 79 points are C; 60 to 69 points are D; 
and below 60 points are E.
Input and output examples:
Input Score: 86
86:B
Input Score: 186
data error!
Hint:
1) s=score/10
score>=90 s=9 or 10 A
80<=score<=89 s=8 B
70<=score<=79 s=7 C
60<=score<=69 s=6 D
score<=59 s= 0 or 1 or 2 or 3 or 4 or 5 E
*/
#include <stdio.h>

int main() {
    int score;

    printf("Input Score: ");
    scanf("%d", &score);

    // Check for valid score range
    if (score < 0 || score > 100) {
        printf("data error!\n");
        return 0;
    }

    // Calculate the grade based on the score
    int s = score / 10; // Integer division

    switch (s) {
        case 10: // score is 100
        case 9:  // score is 90-99
            printf("%d: A\n", score);break;
        case 8:  // score is 80-89
            printf("%d: B\n", score);break;
        case 7:  // score is 70-79
            printf("%d: C\n", score);break;
        case 6:  // score is 60-69
            printf("%d: D\n", score);break;
        default: // score is below 60
            printf("%d: E\n", score);
            break;
    }

    return 0;
}

