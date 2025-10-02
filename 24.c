// Q24. A learning app gives different outputs based on the number type. 
// If the number is even → compute its square; else if odd → compute its cube. 
#include <stdio.h>
#include <math.h>

int main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("The square of %d is %d.\n", number, pow(number, 2));
    }
    else
    {
        printf("The cube of %d is %d.\n", number, pow(number, 3));
    }
    return 0;
}