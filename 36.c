// Q36. An online exam system computes grades based on percentage. Implement a solution to accept 
// percentage and assign Grade ‘A’ if ≥75 else Grade ‘B’ using conditional operator. 
#include <stdio.h>

int main()
{
    float percentage;
    char grade;
    printf("Enter your percentage: ");
    scanf("%f", &percentage);
    grade = (percentage >= 75) ? 'A' : 'B';
    printf("Your grade is: %c\n", grade);
    return 0;
}