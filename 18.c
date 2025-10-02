// Q18. A calendar app calculates whether February has 29 days. Implement a solution to check if a year is leap
// or non-leap.
#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a Leap Year.\n", year);
    }
    else
    {
        printf("%d is a Non-Leap Year.\n", year);
    }

    return 0;
}