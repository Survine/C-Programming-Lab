#include <stdio.h>
#include <stdlib.h>

int main() {
    int dividend, divisor, quotient;

    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0) {
        printf("Error: Division by zero is not allowed.\n");
        exit(1);
    }

    quotient = dividend / divisor;

    printf("Quotient: %d\n", quotient);

    return 0;
}