// Q34. A geometry teaching tool computes circle properties depending on student’s choice. 
// Implement a solution to calculate area, circumference, or diameter of a circle. 
#include <stdio.h>

int main()
{
    int choice;
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("Choose an operation:\n1. Area\n2. Circumference\n3. Diameter\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("The area of the circle with radius %.2f is %.2f.\n", radius, 3.14159 * radius * radius);
            break;
        case 2:
            printf("The circumference of the circle with radius %.2f is %.2f.\n", radius, 2 * 3.14159 * radius);
            break;
        case 3:
            printf("The diameter of the circle with radius %.2f is %.2f.\n", radius, 2 * radius);
            break;
        default:
            printf("Invalid choice! Please select a valid operation (1-3).\n");
    }
    return 0;
}