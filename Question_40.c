#include <stdio.h>

int main() 
{
    int n, a = 0, b = 1;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a);
        b = a + b;
        a = b - a;
    }
    return 0;
}