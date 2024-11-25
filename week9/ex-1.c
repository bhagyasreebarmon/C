/*
1. Write a program to output the following pattern. 
(Requires the use of FOR statement)
**********
**********
**********
**********
*/
#include <stdio.h>

int main() {
    // Number of rows
    int rows = 4;
    // Number of asterisks in each row
    int columns = 10;
    int i;
    int j;

    // Loop through the number of rows
    for ( i = 0; i < rows; i++) {
        // Loop through the number of columns to print asterisks
        for ( j = 0; j < columns; j++) 
		{
            printf("*");
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}

