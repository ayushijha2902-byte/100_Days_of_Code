#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int n = strlen(str);
    int palindrome = 1;
    for(int i = 0; i < n; i++) {
        if(str[i] != str[n - 1 - i]) {
            palindrome = 0;
            break;
        }
    }
    if(palindrome == 1) {
        printf("Palindrome");
    }
    else {
        printf("Not palindrome");
    }
    return 0;
}