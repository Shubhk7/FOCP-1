// Q16. A store runs offers when order size is divisible by both 3 and 5. Implement a solution to check if a 
// number is divisible by 3 and 5.
#include <stdio.h>

int main()
{
    int order_size;
    printf("Enter the order size: ");
    scanf("%d", &order_size);
    if (order_size % 3 == 0 && order_size % 5 == 0)
    {
        printf("The order size is eligible for offers.\n");
    }
    else
    {
        printf("The order size is not eligible for offers.\n");
    }
    return 0;
}