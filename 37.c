// Q37. A civil engineer wants to classify a triangle as equilateral, isosceles, right-angled, or none of these. 
// Implement a solution to accept three sides and display the type of triangle. 
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
    else if ((side1 * side1 + side2 * side2 == side3 * side3) ||
             (side2 * side2 + side3 * side3 == side1 * side1) ||
             (side1 * side1 + side3 * side3 == side2 * side2))
    {
        printf("The triangle is Right-Angled.\n");
    }
    else
    {
        printf("The triangle is None of these types.\n");
    }
    return 0;
}