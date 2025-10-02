// Q27. A civil engineer classifies a triangle design as equilateral, isosceles, or scalene. Implement a solution to 
// check the triangle type based on its sides.
#include <stdio.h>

int main()
{
    int side1, side2, side3;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    if (side1 == side2 && side2 == side3)
    {
        printf("The triangle is Equilateral.\n");
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {
        printf("The triangle is Isosceles.\n");
    }
    else
    {
        printf("The triangle is Scalene.\n");
    }
    return 0;
}