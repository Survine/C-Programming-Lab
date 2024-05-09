#include <stdio.h>

int main() {
    char choice;
    float temp, convertedTemp;
    
    printf("Enter 'C' to convert from Celsius to Fahrenheit or 'F' to convert from Fahrenheit to Celsius: ");
    scanf(" %c", &choice);
    
    printf("Enter temperature: ");
    scanf("%f", &temp);

    convertedTemp = (choice == 'C' || choice == 'c') ? (temp * 9 / 5) + 32 : (temp - 32) * 5 / 9;
    
    printf((choice == 'C' || choice == 'c') ? "%.2f Celsius is %.2f Fahrenheit.\n" : "%.2f Fahrenheit is %.2f Celsius.\n", temp, convertedTemp);

    return 0;
}
