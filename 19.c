// Q19. Election software verifies if a person is eligible to vote based on age and nationality. Implement a 
// solution to check voting eligibility. 
#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age >= 18)
    {
        printf("You are eligible to vote.\n");
    }
    else
    {
        printf("You are not eligible to vote.\n");
    }
    return 0;
}