#include <stdio.h>

int main() 
{
    int score;
    printf("Enter your exam score: ");
    scanf("%d", &score);

    if (score >= 90 && score <= 100) 
    {
        printf("Your grade is A");
    } else if (score >= 80 && score < 90) 
    {
        printf("Your grade is B");
    } else if (score >= 70 && score < 80) 
    {
        printf("Your grade is C");
    } else if (score >= 60 && score < 70) 
    {
        printf("Your grade is D");
    } else if (score >= 0 && score < 60) 
    {
        printf("Your grade is F");
    } else 
    {
        printf("Invalid score entered");
    }
    return 0;
}
