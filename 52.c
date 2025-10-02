// A bank software computes simple interest for multiple loan accounts. Implement a solution to calculate 
// SI for 3 sets of P, R, and N. 
#include <stdio.h>

int main()
{
    int P[100], R[100], T[100], SI[100], iter;
    printf("Enter the number of entries: ");
    scanf("%d", &iter);
    for (int i = 0; i < iter; i++)
    {
        printf("Enter Principal, Rate and Time for entry %d: ", i + 1);
        scanf("%d %d %d", &P[i], &R[i], &T[i]);
    }
    for (int i = 0; i < iter; i++)
    {
        SI[i] = (P[i] * R[i] * T[i]) / 100;
        printf("Simple Interest for entry %d: %d\n", i + 1, SI[i]);
    }
    for (int i = 0; i < iter; i++)
    {
        printf("Entry %d:\n\nPrincipal = %d,\n\nRate = %d,\n\nTime = %d,\n\nSimple Interest = %d\n", i + 1, P[i], R[i], T[i], SI[i]);
    }

    return 0;
}