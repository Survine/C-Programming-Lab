#include <stdio.h>

int main()
{
    int choice;
    float temp,convertedtemp;

    printf("1 for Celsius to Fahrenheit\n");
    printf("2 for Fahrenheit to Celsius\n");
    printf("Enter your choice :");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        convertedtemp = (temp * 9/5) + 32;
        printf("temperature in Fahrenheit: %.2f\n", convertedtemp);
        break;
    
    case 2:
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        convertedtemp = (temp - 32)*5/9;
        printf("temperature in Celsius: %.2f\n", convertedtemp);
        break;
    default:
        printf("Invalid Choice");
    }
    return 0;

}