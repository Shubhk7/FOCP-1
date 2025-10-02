// Q17. A text editor auto-detects whether an input letter is a vowel or consonant. Implement a solution to 
// classify the character.
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            printf("%c is a Vowel.\n", ch);
        }
        else
        {
            printf("%c is a Consonant.\n", ch);
        }
    }
    else
    {
        printf("Invalid input! Please enter an alphabet.\n");
    }
    return 0;
}