// Q15. A smart home controller checks if the number of devices ON is even or odd. Implement a solution to 
// accept a number and determine if it is even or odd. 
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number of devices ON: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("The number of devices ON is even.\n");
    }
    else
    {
        printf("The number of devices ON is odd.\n");
    }
    return 0;
}