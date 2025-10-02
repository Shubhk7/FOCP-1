// Q7. A civil engineer wants to check the longest side of a triangular structure using Pythagoras’ theorem. 
// Implement a solution to compute the hypotenuse of a right-angled triangle.
#include <stdio.h>
#include <math.h>

int main()
{
    int base, height;
    printf("Enter the base of the triangle: ");
    scanf("%d", &base);
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);
    printf("Hypotenuse of this right angled triangle is %.2f", (sqrt(base * base + height * height)));
    return 0;
}