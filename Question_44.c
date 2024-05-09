#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is neither prime nor composite.\n", num);
        return 0;
    }

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            printf("%d is not a prime number.\n", num);
            return 0;
        }
    }

    printf("%d is a prime number.\n", num);

    return 0;
}