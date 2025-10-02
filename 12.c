// Q12. A bank wants to provide exact maturity amount on savings deposits. Implement a solution to compute Compound Interest. 
#include <stdio.h>
#include <math.h>
int main()
{
    float P, R, T, n;
    printf("Enter Principal: ");
    scanf("%f", &P);
    printf("Enter Rate of Interest: ");
    scanf("%f", &R);
    printf("Enter Time (in years): ");
    scanf("%f", &T);

    printf("Compound Interest = %.2f", P * pow((1 + R / 100), T) - P);
    return 0;
}