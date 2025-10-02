// Q25. An admission portal decides eligibility based on marks in three subjects. Implement a solution to 
// classify the student into a Degree, Diploma, or Certificate course.
#include <stdio.h>

int main()
{
    int marks1, marks2, marks3;
    float average;
    printf("Enter marks in three subjects: ");
    scanf("%d %d %d", &marks1, &marks2, &marks3);
    average = (marks1 + marks2 + marks3) / 3.0;
    if (average >= 70)
    {
        printf("Eligible for Degree course.\n");
    }
    else if (average >= 50)
    {
        printf("Eligible for Diploma course.\n");
    }
    else if (average >= 35)
    {
        printf("Eligible for Certificate course.\n");
    }
    else
    {
        printf("Not eligible for any course.\n");
    }
    return 0;
}