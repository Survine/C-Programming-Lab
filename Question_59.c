#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);
    
    printf("Sum: %d\n", sum(num1, num2));
    return 0;
}