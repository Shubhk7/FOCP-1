// Q6. A banker wants to calculate the amount a customer needs to pay after borrowing money. Implement a solution to compute Simple Interest.
#include <stdio.h>

int main()
{
    float P, R, T;
    printf("Enter the Principal amount: ");
    scanf("%f", &P);
    printf("Enter the Rate of interest: ");
    scanf("%f", &R);
    printf("Enter the Time in years: ");
    scanf("%f", &T);
    printf("Simple interest for given data is %.2f", (P * R * T) / 100);
    return 0;
}