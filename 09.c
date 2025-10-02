// Q9. A student wants to swap the values of two variables for practicing coding basics. 
// Implement a solution to swap two numbers using a temporary variable. 
#include <stdio.h>

int main()
{
    int var1, var2, temp;
    printf("Enter First numbers: ");
    scanf("%d", &var1);
    printf("Enter Second numbers: ");
    scanf("%d", &var2);
    temp = var1;
    var1 = var2;
    var2 = temp;
    printf("After swapping, First number: %d\n", var1);
    printf("After swapping, Second number: %d\n", var2);

    return 0;
}