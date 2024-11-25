/*
Write a program to input 2 integers and operators, 
perform multiplication *, division /, and remainder % operations 
respectively, and output the operation results.
Input and output examples:
Input x Operator y : 21 % 8
21 % 8 = 5
Input x Operator y : 21 + 8
Operator error!
*/
#include <stdio.h>
int main() {
    int x, y;
    char operator;

    printf("Input x Operator y : ");
    scanf("%d %c %d", &x, &operator, &y);

    switch (operator) {
        case '*':
            printf("%d %c %d = %d\n", x, operator, y, x * y);
            break;
        case '/':
            if (y != 0) {
                printf("%d %c %d = %d\n", x, operator, y, x / y);
            } else {
                printf("Division by zero error!\n");
            }
            break;
        case '%':
            if (y != 0) 
			{
                printf("%d %c %d = %d\n", x, operator, y, x % y);
            } 
			else 
			{
                printf("Division by zero error!\n");
            }
            break;
        default:
            printf("Operator error!\n");
    }

    return 0;
}

