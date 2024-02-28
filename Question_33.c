#include <stdio.h>

int main()
{
    char letter;
    printf("Enter a character: ");
    scanf("%c", &letter);

    if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')) {
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
            printf("The given character is a Vowel");
        } else {
            printf("The given character is a Consonant");
        }
    } else {
        printf("Input is a non-alphabetical character");
    }

    return 0;
}
