#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            int flag = 0;
            for(int k = 0; k < i; k++) {
                if(str[k] == str[i]) {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) {
                for(int j = i+1; str[j] != '\0'; j++) {
                    if(str[j] == str[i]) {
                        printf("%c", str[i]);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}