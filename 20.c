// Q20. A wholesale supplier applies 10% discount if order > 1000 items. Implement a solution to compute total 
// expenses and apply discount accordingly.
#include <stdio.h>

int main()
{
    int items;
    float price_per_item = 5.0 , total_expense, discount = 0.0;
    printf("Enter number of items ordered: ");
    scanf("%d", &items);
    total_expense = items * price_per_item;
    if(items > 1000)
    {
        discount = total_expense * 0.10;
        total_expense -= discount;
        printf("Total expense after discount (if applicable): $%.2f\n", total_expense);
    }
    else
    {
        printf("Total expense (no discount applied): $%.2f\n", total_expense);
    }

    return 0;
}