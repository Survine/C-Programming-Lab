#include <stdio.h>
#include <string.h>

int main() {
    char s[100], r[100];
    printf("Enter a string: ");
    scanf("%s", s);
    strcpy(r, s);
    strrev(r);
    printf("%s is %sa palindrome.\n", s, strcmp(s, r) ? "not " : "");
    return 0;
}