/*
input the grades of several students from the
keyboard, calculate and output the highest and 
lowest grades, and end the input when a negative number 
is entered.
*/
#include <stdio.h>

int main() {
    int grade;
    int max = -1, min = 101;   // Initial values assuming grades are between 0 and 100

    printf("Enter student grades (enter a negative number to stop):\n");

    while (1) {
        printf("Enter grade: ");
        scanf("%d", &grade);
        if (grade < 0) {
            break;  // End input when negative number is entered
        }

        if (grade > max)
        {
            max = grade;
        }

        if (grade < min) {
            min = grade;
        }
    }

    printf("Highest grade: %d\n", max);
    printf("Lowest grade: %d\n", min);

    return 0;
}

