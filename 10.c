// Q10. A programmer wants to optimize memory and avoid using extra variables while swapping two values. 
// Implement a solution to swap two numbers without using a third variable. 
#include <stdio.h>

int main()
{
    int var1, var2;
    printf("Enter First numbers: ");
    scanf("%d", &var1);
    printf("Enter Second numbers: ");
    scanf("%d", &var2);
    var1 = var1 + var2; 
    var2 = var1 - var2; 
    var1 = var1 - var2;
    printf("\nAfter swapping, First number: %d\n", var1);
    printf("After swapping, Second number: %d\n", var2);
}