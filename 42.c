// Q42. A payroll system categorizes employees based on their basic salary into low, medium, or high. 
// Implement a solution to classify salary category using nested if. 
#include <stdio.h>

int main()
{
    int salary;
    printf("Enter the basic salary: ");
    scanf("%d", &salary);
    if (salary < 30000)
    {
        printf("Salary Category: Low\n");
    }
    else
    {
        if (salary <= 70000)
        {
            printf("Salary Category: Medium\n");
        }
        else
        {
            printf("Salary Category: High\n");
        }
    }
    return 0;
}