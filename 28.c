// Q28. A mathematics tool computes the exact roots of a quadratic equation for teaching purposes. Implement a 
// solution to calculate the roots of a quadratic equation. 
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float root1, root2, discriminant;
    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant >= 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are: %.2f and %.2f\n", root1, root2);
    }
    else
    {
        printf("The equation has complex roots.\n");
    }
    return 0;
}