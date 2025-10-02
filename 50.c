// A banking app verifies transaction IDs by reversing digits for checksum validation. 
// Implement a solution to accept a number and display its reverse. 
#include <stdio.h>

int main()
{
    int num, reversedNum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    printf("Reversed number: %d\n", reversedNum);
    return 0;
}