#include <stdio.h>

#define N 3

int main() {
    int i,j, x[N][N], y[N][N];

    // Input elements for the 3x3 array x
    printf("Please input array x (3x3):\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &x[i][j]);
        }
    }

    // Swap rows and columns and store in array y
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            y[j][i] = x[i][j];
        }
    }

    // Output the transposed array y
    printf("Array y:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", y[i][j]);
        }
        printf("\n");
    }

    return 0;
}

