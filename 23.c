// Q23 An engineering calculator evaluates the type of roots of quadratic equations. 
// Implement a solution to check whether roots are: 
// i) Real and Unequal 
// ii) Real and Equal 
// iii) Imaginary 
#include <stdio.h>

int main()
{
    int a, b, c, discriminant;
    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        printf("Roots are Real and Unequal.\n");
    }
    else if (discriminant == 0)
    {
        printf("Roots are Real and Equal.\n");
    }
    else
    {
        printf("Roots are Imaginary.\n");
    }
    return 0;
}