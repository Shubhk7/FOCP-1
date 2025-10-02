// Q33. A finance calculator performs basic operations on two amounts (add, subtract, multiply, divide).
// Implement a solution to compute based on user’s choice.
#include <stdio.h>

int main()
{
    int choice;
    float amount1, amount2, result;
    printf("Enter two amounts: ");
    scanf("%f %f", &amount1, &amount2);
    printf("Choose an operation:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        result = amount1 + amount2;
        printf("Result: %.2f\n", result);
        break;
    case 2:
        result = amount1 - amount2;
        printf("Result: %.2f\n", result);
        break;
    case 3:
        result = amount1 * amount2;
        printf("Result: %.2f\n", result);
        break;
    case 4:
        if (amount2 != 0)
        {
            result = amount1 / amount2;
            printf("Result: %.2f\n", result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;
    default:
        printf("Invalid choice! Please select a valid operation (1-4).\n");
    }
    return 0;
}