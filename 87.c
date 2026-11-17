#include <stdio.h>
#include <strings.h>
int main() {
    char str[100];
    int spaces=0 , digits=0 , sp =0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);   
    for(int i =0 ; str[i] != '\0' ; i++){
        if (str[i] == ' '){
            spaces++;
        }
        else if(str[i] >= '0' && str[i] <= '9'){
            digits++;
        }
       else if (!((str[i] >= 'a' && str[i] <= 'z') ||
                   (str[i] >= 'A' && str[i] <= 'Z'))) {
            sp++;
        }

    }
    printf("Spaces=%d, Digits=%d, Special=%d" , spaces , digits , sp);
    return 0;
}