// Q26. An architect checks if three given angles can form a valid triangle. Implement a solution to accept three 
// angles and verify if the triangle is valid. 
#include <stdio.h>

int main()
{
    int angle1, angle2, angle3, sum;
    printf("Enter three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    sum = angle1 + angle2 + angle3;
    if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
    {
        printf("The angles form a valid triangle.\n");
    }
    else
    {
        printf("The angles do not form a valid triangle.\n");
    }
    return 0;
}