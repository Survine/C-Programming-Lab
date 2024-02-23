#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the 1st number :",a);
    scanf("%d",&a);
    printf("Enter the 2nd number :",b);
    scanf("%d",&b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("After Swapping\n");
    printf("a = %d\nb = %d\n",a,b);
    return 0;
}
