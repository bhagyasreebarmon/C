#include <stdio.h>

#define MAX 5

int main() {
    int i,j, n, m;
    int a[MAX][MAX];
    int minValue, minRow, minCol;

    // Input dimensions of the array
    printf("enter the number of array rows and columns:, m: ");
    scanf("%d %d", &n, &m);

    if (n > MAX || m > MAX) {
        printf("Error: Maximum size is %d x %d\n", MAX, MAX);
        return 1;
    }

    // Input elements of the array
    printf("enter the array elements of 2 rows and 3 columns:\n");
    for (i = 0; i < n; i++) {
        for ( j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Find the smallest element and its position
    minValue = a[0][0];
    minRow = 0;
    minCol = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (a[i][j] < minValue) {
                minValue = a[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    // Output the array
    printf("the array of 2 rows and 3 columns:\n", n, m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Output the smallest element and its position
    printf("The smallest element is=%d\n", minRow + 1, minCol + 1, minValue);

    return 0;
}


