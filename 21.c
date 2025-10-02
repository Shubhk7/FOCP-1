// Q21. A bank statement marks a transaction as credit (+), debit (–), or neutral (0). 
// Implement a solution to classify a number as positive, negative, or zero. 
#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number > 0)
    {
        printf("%d is a Positive number (Credit).\n", number);
    }
    else if (number < 0)
    {
        printf("%d is a Negative number (Debit).\n", number);
    }
    else
    {
        printf("The number is Zero (Neutral).\n");
    }   
    return 0;
}