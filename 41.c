// Q41. A school management system assigns grades based on marks ranges. Implement a solution to input
// marks and display Grade A, B, C, or Fail.
#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);
    if (marks >= 90 && marks <= 100)
    {
        printf("Grade A\n");
    }
    else if (marks >= 75 && marks < 90)
    {
        printf("Grade B\n");
    }
    else if (marks >= 50 && marks < 75)
    {
        printf("Grade C\n");
    }
    else if (marks >= 0 && marks < 50)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Invalid marks! Please enter a value between 0 and 100.\n");
    }
    return 0;
}