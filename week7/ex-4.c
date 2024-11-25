/*
The salary of sales staff is mainly basic salary plus 
sales commission. If sales volume>500, commission 
is 15%; if 500>=sales volume>300, commission is 10%; if 300>=sales 
volume>100, commission is 7.5%; if 100>=sales volume>50, commission is 5%; otherwise, no commission.

It is known that the basic salary of a sales company 
is 3,000 yuan. Enter the sales volume of the employee and output the salary of the employee.

Input and output examples:

Please enter basic salary:3000

Please enter sales:150

Your salary: 3011
*/

#include <stdio.h>
int main() {
    float basicSalary, sales, commissionRate, commission, totalSalary;

    // Input basic salary
    printf("Please enter basic salary: ");
    scanf("%f", &basicSalary);

    // Input sales volume
    printf("Please enter sales: ");
    scanf("%f", &sales);

    // Determine commission rate based on sales volume
    if (sales > 500) {
        commissionRate = 0.15;
    } else if    ( sales>300) {
        commissionRate = 0.10;
    } else if (sales>100) {
        commissionRate = 0.075;
    } else if (sales>50) {
        commissionRate = 0.05;
    } else {
        commissionRate = 0.0;
    }

    // Calculate commission and total salary
    commission = sales * commissionRate;
    totalSalary = basicSalary + commission;

    // Output the total salary
    printf("Your salary: %.0f\n", totalSalary);

    return 0;
}

