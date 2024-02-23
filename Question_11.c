#include <stdio.h>
int main()
{
    int a = 9;
    double b = 6.3;
    char c = 'p';
    float d = 9.9;

    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    printf("%d\n",sizeof(c));
    printf("%d\n",sizeof(d));
    return 0;
}