#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    if(str[0] >= 'a' && str[0] <= 'z'){
    str[0] = str[0] - 32;
}
    for(int i =1 ; str[i] != '\0' ; i++){
        if(str[i+1] >= 'a' && str[i+1] <= 'z'){
        if(str[i] == ' '){
            str[i+1] = str[i+1]-32;
        }
    }
    }
    printf("%s", str);
    return 0;
}