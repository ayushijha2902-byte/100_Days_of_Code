#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] != 'a' && str[i] != 'e' &&
           str[i] != 'i' && str[i] != 'o' &&
           str[i] != 'u' && str[i] != 'A' &&
           str[i] != 'E' && str[i] != 'I' &&
           str[i] != 'O' && str[i] != 'U') {
            str[i] = '\0';
        }
    }
    printf("%s", str);
    return 0;
}