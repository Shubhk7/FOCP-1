// Q11. An HR system needs to calculate employees’ net salaries including a fixed 12% bonus for each worker. 
// Implement a solution to accept the number of employees and their basic salary. Compute bonus, net salary, and 
// display results.
#include <stdio.h>

int main()
{
    int num_employees, salary;
    float bonus, net_salary;
    printf("Enter number of employees: ");
    scanf("%d", &num_employees);
    printf("Enter basic salary of each employee: ");
    scanf("%d", &salary);
    printf("Bonus = %.2f\nNet Salary = %.2f\n***For Each employee", 0.12 * salary, (salary + (0.12 + salary)));
    return 0;
}