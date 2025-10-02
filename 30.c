// Q30. In quality control, batch sizes must be divisible by a fixed standard size. 
// Implement a solution to check whether the first number is divisible by the second number.
#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two integers (num1 and num2): ");
    scanf("%d %d", &num1, &num2);
    if (num2 != 0) // Check to prevent division by zero
    {
        if (num1 % num2 == 0)
        {
            printf("%d is divisible by %d.\n", num1, num2);
        }
        else
        {
            printf("%d is not divisible by %d.\n", num1, num2);
        }
    }
    else
    {
        printf("Division by zero is not allowed.\n");
    }
    return 0;
}