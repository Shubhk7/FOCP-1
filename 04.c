// Q4. A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a solution to convert Fahrenheit temperature into Centigrade.
#include <stdio.h>

int main()
{
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    printf("%.2f Fahrenheit is equal to %.2f Celsius", fahrenheit, (fahrenheit -32) *5/9);
    return 0;
}