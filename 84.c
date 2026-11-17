#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    for(int i = 0; str[i] != '\0'; i++){
        str[i] = str[i] - 32;
    }
    printf("String in uppercase: %s\n", str);
    return 0;
}