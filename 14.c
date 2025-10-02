// Q14. A game compares two player scores to find who is ahead. Implement a solution to accept two numbers
// and display the largest.
#include <stdio.h>

int main()
{
    int score1, score2;
    printf("Enter score of player 1: ");
    scanf("%d", &score1);
    printf("Enter score of player 2: ");
    scanf("%d", &score2);
    if (score1 > score2)
    {
        printf("Player 1 is ahead with a score of %d\n", score1);
    }
    else if (score2 > score1)
    {
        printf("Player 2 is ahead with a score of %d\n", score2);
    }
    else
    {
        printf("Both players are tied with a score of %d\n", score1);
    }

    return 0;
}