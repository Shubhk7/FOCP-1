// Q32. A calculator app provides options to compute square, square root, or cube. Implement a solution to 
// operate based on the user’s choice. 
#include <stdio.h>
#include <math.h>

int main()
{
    int choice, number;
    printf("Choose an operation:\n1. Square\n2. Square Root\n3. Cube\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    printf("Enter a number: ");
    scanf("%d", &number);
    switch(choice)
    {
        case 1:
            printf("The square of %d is %d.\n", number, number * number);
            break;
        case 2:
            if (number >= 0)
            {
                printf("The square root of %d is %.2f.\n", number, sqrt(number));
            }
            else
            {
                printf("Square root of negative numbers is not defined in real numbers.\n");
            }
            break;
        case 3:
            printf("The cube of %d is %d.\n", number, number * number * number);
            break;
        default:
            printf("Invalid choice! Please select a valid operation (1-3).\n");
    }

    return 0;
}