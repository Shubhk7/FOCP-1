#include <stdio.h>

int main()
{
    int num, counter = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            counter = 1;
            break;
        }
        else
        {
            counter = 0;
        }
    }
    if (counter == 1)
    {
        printf("The number is not prime.\n");
    }
    else
    {
        printf("The number is prime.\n");
    }
    return 0;
}