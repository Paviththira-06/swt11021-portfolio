//using if-else
// Read a numeric score (0-100) and print the letter grade AND a descriptive message. Validate that the score is in range.

#include <stdio.h>

int main(void)
{
    int score;

    printf("Enter score: ");
    scanf("%d", &score);

    if (score < 0 || score > 100)
    {
        printf("Invalid score\n");
    }
    else if (score >= 75)
    {
        printf("A - Excellent\n");
    }
    else if (score >= 65)
    {
        printf("B - Very Good\n");
    }
    else if (score >= 55)
    {
        printf("C - Good\n");
    }
    else if (score >= 45)
    {
        printf("S - Pass\n");
    }
    else
    {
        printf("F - Fail\n");
    }

    return 0;
}




