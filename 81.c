#include <stdio.h>
int main() {
    int count = 0;
    char str[100];
    printf("Enter a string: ");
    scanf("%s", &str);
    for(int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    if(count == 0) {
        printf("The string is empty.");
    }
    else {
        printf("The length of the string is: %d", count);
    }
    return 0;
}