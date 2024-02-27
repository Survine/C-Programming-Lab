#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the 1st Number :");
    scanf("%d",&a);
    printf("Enter the 2nd Number :");
    scanf("%d",&b);

    printf("%d is the sum\n",a+b);
    printf("%d is the difference\n",a-b);
    printf("%d is the product\n",a*b);
    printf("%d is the quotient",a/b);

    return 0;
}