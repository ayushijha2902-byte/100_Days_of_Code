#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int l = 0, r = strlen(str) - 1;
    while (l < r) {
        char t = str[l];
        str[l] = str[r];
        str[r] = t;
        l++;
        r--;
    }
    printf("Reversed string: %s\n", str);
    return 0;
}