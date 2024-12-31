#include <stdio.h>

#define S 5
#define C 3

int main() 
{
	int i,j;
    float grades[S][C],avg;

    // Input grades for each student and each course
    for (i = 0; i < S; i++) {
        printf("Enter grades for student %d:\n", i + 1);
        for (j = 0; j < C; j++) {
            printf("  Course %d: ", j + 1);
            scanf("%f", &grades[i][j]);
        }
    }

    // Calculate and display average grades for each student
    for (i = 0; i < S; i++) {
        float sum = 0;
        for (j = 0; j < C; j++) {
            sum += grades[i][j];
        }
        avg = sum / C;
        printf("Student %d average grade: %.2f\n", i + 1, avg);
    }

    return 0;
}
