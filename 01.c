// Q1. A cashier needs to add two amounts entered by a customer quickly. Implement a solution to accept two numbers and compute their sum. 
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter the first Number: ");
    scanf("%d", &num1);
    printf("Enter the second Number: ");
    scanf("%d", &num2);
    printf("Sum of %d and %d is %d", num1, num2, num1 + num2);
    return 0;
}