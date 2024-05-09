#include <stdio.h>

int main() 
{
    int n, a = 0, b = 1,c;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    int i=0;
    while (i<n) 
    {
        printf("%d ", a);
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    return 0;
}