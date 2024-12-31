#include <stdio.h>

#define MAX_R 10

int main() {
    int i,j, pascal[MAX_R][MAX_R] = {0};
    int rows;

    // Input the number of rows for Pascal's triangle
    printf("Enter the number of rows for Pascal's Triangle (1-10): ");
    scanf("%d", &rows);

    if (rows > MAX_R || rows <= 0) {
        printf("Invalid input! Please enter a number between 1 and 10.\n");
        return 1;
    }

    // Generate Pascal's triangle
    for ( i = 0; i < rows; i++) {
        pascal[i][0] = 1; // First element of each row is 1
        for (j = 1; j <= i; j++) {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }

    // Output Pascal's triangle
    printf("Pascal's Triangle:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }

    return 0;
}

