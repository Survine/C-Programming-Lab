#include <stdio.h>

void even_or_odd(int num)
{
    if (num % 2 == 0)
    {
        printf("%d is even",num);
    }
    else
    {
        printf("%d is odd",num);

    }
}

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    even_or_odd(n);
    return 0;
}