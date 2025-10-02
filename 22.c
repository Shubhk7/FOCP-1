// Q22. A contest judge finds the top scorer among three contestants. Implement a solution to compute the
// largest of three numbers.
#include <stdio.h>

int main()
{
    int score1, score2, score3;
    printf("Enter scores of three contestants: ");
    scanf("%d %d %d", &score1, &score2, &score3);
    if (score1 >= score2 && score1 >= score3)
    {
        printf("Contestant 1 has the highest score: %d\n", score1);
    }
    else if (score2 >= score1 && score2 >= score3)
    {
        printf("Contestant 2 has the highest score: %d\n", score2);
    }
    else
    {
        printf("Contestant 3 has the highest score: %d\n", score3);
    }
    return 0;
}