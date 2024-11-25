#include <stdio.h>

int main()

{

int n1, n2, n3, sum;

float avg; 

printf("Enter the first Number \n");

scanf("%d",&n1);

printf("Enter the Second Number \n");

scanf("%d",&n2);

printf("Enter the Third Number \n");

scanf("%d",&n3);

sum = n1 + n2 + n3; 

avg=sum/3.0;

printf("\nThe Sum of three Numbers = %d", sum); 

printf("\nThe Average of three Numbers = %.2f\n", avg);

return 0;

}
