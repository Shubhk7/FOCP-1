// Q35. A coding exercise requires finding the larger of two inputs without using if-else. 
// Implement a solution to compute largest of two numbers using conditional operator. 
#include <stdio.h>

int main()
{
    int num1, num2, largest;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    largest = (num1 > num2) ? num1 : num2;
    printf("The largest number is: %d\n", largest);
    return 0;
}