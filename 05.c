// Q5. An engineer is designing a triangular park with one right angle. Implement a solution to compute the area of a right-angled triangle. 
#include <stdio.h>

int main()
{
    float base, height;
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    printf("Area of Triangle with base %.2f and height %.2f is %.2f", base, height, 0.5 * base * height);
    return 0;
}