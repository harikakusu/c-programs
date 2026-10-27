#include <stdio.h>

int main()
{
    float salary, bonus, total;

    printf("Enter salary and bonus percentage: ");
    scanf("%f %f", &salary, &bonus);

    total = salary + (salary * bonus / 100);

    printf("Total Salary = %.2f", total);

    return 0;
}