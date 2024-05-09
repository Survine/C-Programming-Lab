#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sum = 0;
    char choice;

    srand(time(0));

    do {
        int dice = rand() % 6 + 1;
        sum += dice;

        printf("You rolled a %d\n", dice);
        printf("Do you want to roll again? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("Total sum: %d\n", sum);

    return 0;
}