// Q39. A calendar application validates if a given year has 366 days. Implement a solution to accept a year and 
// check whether it is a leap year or not. 
#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a Leap Year with 366 days.\n", year);
    }
    else
    {
        printf("%d is not a Leap Year and has 365 days.\n", year);
    }
    return 0;
}