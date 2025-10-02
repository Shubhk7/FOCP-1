// Q13. A software tool for mathematics teachers needs a feature where students can quickly calculate powers of 
// numbers. Implement a solution to accept two numbers x and y, and compute x raised to the power y.
#include <stdio.h>
#include <math.h>

int main()
{
    int base, exponent;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter exponent number: ");
    scanf("%d", &exponent);
    int result = pow(base, exponent);
    printf("%d raised to the power %d is %d\n", base, exponent, result);

    return 0;
}