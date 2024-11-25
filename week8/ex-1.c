/*
Write a program to input any month of 2014 and output 
the number of days in this month. The switch statement is required.
Input and output examples:
Input month of 2014: 10
2014.10:31days
Input month of 2014: 15
Please enter a month between 1-12!
Tips:
1) The program should be run 13 times, 
inputting months 1-12 and other numbers respectively;
2) When programming, please note that different months 
can have the same number of days.
*/
#include <stdio.h>

int main() 
{
    int month;
    int i;
    int year;

    for (i = 0; i < 13; i++) 
	{
        printf("Input month of 2014: ");
        scanf("%d", &month);

        switch (month) 
		{
            case 1:  // January
            case 3:  // March
            case 5:  // May
            case 7:  // July
            case 8:  // August
            case 10: // October
            case 12: // December
                printf("2014.%02d: 31 days\n", month);
                break;
            case 4:  // April
            case 6:  // June
            case 9:  // September
            case 11: // November
                printf("2014.%02d: 30 days\n", month);
                break;
            case 2:  // February
            if(year%400==0 || year%4==0 && year%100!=0)
			
                printf("2014.02: 29 days\n"); // 2014 is not a leap year
            else
            printf("2014.02: 28 days\n");
            break;
            default:
                printf("Please enter a month between 1-12!\n");
        }
    }

    return 0;
}

