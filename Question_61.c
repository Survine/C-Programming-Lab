#include <stdio.h>

float calculateArea(float radius) {
    float area;
    area = 3.14 * radius * radius;
    return area;
}

int main() {
    float radius, area;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    area = calculateArea(radius);
    
    printf("The area of the circle is: %.2f\n", area);
    
    return 0;
}