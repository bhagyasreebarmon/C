/*
2. Write a program to input the scores of three courses of 
three students, and calculate and output the average score of each 
student in three courses (the result is rounded to 2 decimal 
places). (Requires the use of FOR statement)
Input and output examples:
Please enter the the three courses of Student 1: 70 80 90
aver= 80.00
Please enter the the three courses of Student 2: 80 95 90
aver= 88.33
Please enter the the three courses of Student 3: 90 95 98
aver= 93.33
*/
#include <stdio.h>

int main() {
    float scores[3][3]; // 3 students, 3 courses
    float averages[3];  // To store averages for each student
    int i,j;
    // Loop through each student
    for (i = 0; i < 3; i++) {
        printf("Please enter the three courses of Student %d: ", i + 1);
        float sum = 0.0; // Initialize sum for each student

        // Loop through each course for the current student
        for (j = 0; j < 3; j++) {
            scanf("%f", &scores[i][j]);
            sum += scores[i][j]; // Add score to sum
        }

        // Calculate the average
        averages[i] = sum / 3.0;
    }

    // Output the averages for each student
    for (i = 0; i < 3; i++) {
        printf("aver= %.2f\n", averages[i]);
    }

    return 0;
}

