#include <stdio.h>
#include <math.h>
#define pi 3.14
int main()
{
    float radius;
    printf("Enter the radius :");
    scanf("%f",&radius);

    float area = pi * pow(radius,2);
    printf("The area of the circle is %.2f",area);
    return 0;
}