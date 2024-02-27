#include <stdio.h>

int main()
{
    char letter;
    printf("Enter a character :");
    scanf("%c",&letter);

    if( letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' ||letter == 'O' || letter == 'U')
    {
        printf("The given character is a Vowel");
    }
    else if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
    {
        printf("The given character is Consonant");
    }
    else 
    {
        printf("Input is a non alphabetical character");
    }

    return 0;
}