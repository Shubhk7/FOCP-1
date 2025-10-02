// Q3. An architect wants to calculate the space covered by a circular fountain. Implement a solution to compute the area of a circle. 
#include <stdio.h>

int main()
{
    int radius;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    printf("Area of Circle with radius %d is %.2f", radius, 3.14 * radius * radius);
    return 0;
}