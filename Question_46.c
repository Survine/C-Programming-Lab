#include <stdio.h>

int main() {
    int number, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d is %d\n", number, fact);

    return 0;
}