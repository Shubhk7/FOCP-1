// Q2. A teacher wants to find the average marks of three students to decide class performance. Implement a solution to accept three numbers and compute their average. 
#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter the first Number: ");
    scanf("%d", &num1);
    printf("Enter the second Number: ");
    scanf("%d", &num2);
    printf("Enter the third Number: ");
    scanf("%d", &num3); 
    printf("Average of %d, %d and %d is %.2f", num1, num2, num3, (num1 + num2 + num3) / 3.0);
    return 0;
}