#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter the 1st number: ");
    scanf("%d", &a);

    printf("Enter the 2nd number: ");
    scanf("%d", &b);

    printf("Before Swapping\n");
    printf("a = %d\nb = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swapping\n");
    printf("a = %d\nb = %d\n", a, b);

    return 0;
}
