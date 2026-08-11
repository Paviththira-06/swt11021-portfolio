// Read a numeric score (0-100) and print the letter grade AND a descriptive message. Validate that the score is in range.
// using switch-
#include <stdio.h>

int main()
{
    int score;

    printf("Enter score: ");
    scanf("%d", &score);

    if (score < 0 || score > 100)
    {
        printf("Invalid score\n");
    }
    else
    {
        switch (score / 10)
        {
            case 10:
            case 9:
            case 8:
            case 7:
                printf("A - Excellent\n");
                break;

            case 6:
                printf("B - Very Good\n");
                break;

            case 5:
                printf("C - Good\n");
                break;

            case 4:
                printf("S - Pass\n");
                break;

            default:
                printf("F - Fail\n");
        }
    }

    return 0;
}
//