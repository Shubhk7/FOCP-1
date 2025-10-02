//  A logistics system checks all possible box sizes (factors) that fit into a shipment. Implement a solution to 
// accept a number and display its factors. 
#include <stdio.h>

int main()
{
    int num, i;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}