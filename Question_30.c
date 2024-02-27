#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);

    if (a>b && a>c)
    {
        printf("%d is maximum",a);
    }

    else if (b>a && b>c)
    {
        printf("%d is maximum",b);
    }
    else
    {
        printf("%d is maximum",c);
    }

    return 0;
}