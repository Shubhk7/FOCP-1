// Q44. A scientific calculator computes the absolute magnitude of values irrespective of sign. 
// Implement a solution to accept an integer and display its absolute value. 
#include <stdio.h>

int main()
{
    int number, absolute_value;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number < 0)
    {
        absolute_value = -number;
        printf("The absolute value is: %d\n", absolute_value);
    }
    else
    {
        absolute_value = number;
        printf("The absolute value is: %d\n", absolute_value);
    }
    return 0;
}