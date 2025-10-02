// Q40. A utility company computes customer bills based on units consumed. Implement a solution to accept 
// number of units consumed and calculate bill using given rates. 
#include <stdio.h>

int main()
{
    int units;
    float bill_amount;
    printf("Enter number of units consumed: ");
    scanf("%d", &units);
    if (units <= 100)
    {
        bill_amount = units * 0.5;
    }
    else if (units <= 200)
    {
        bill_amount = (100 * 0.5) + ((units - 100) * 0.75);
    }
    else if (units <= 300)
    {
        bill_amount = (100 * 0.5) + (100 * 0.75) + ((units - 200) * 1.20);
    }
    else
    {
        bill_amount = (100 * 0.5) + (100 * 0.75) + (100 * 1.20) + ((units - 300) * 1.50);
    }
    return 0;
}