//  A data analytics tool finds the maximum sales figure from multiple entries. 
// Implement a solution to accept ‘n’ numbers and display the largest. 
#include <stdio.h>

int main()
{
    int n, i;
    float num, max;
    printf("Enter the number of sales entries: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer for the number of entries.\n");
        return 1;
    }
    printf("Enter sales figures:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &num);
        if (i == 0 || num > max) {
            max = num;
        }
    }
    printf("The maximum sales figure is: %.2f\n", max);
    
    return 0;
}