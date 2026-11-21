#include <stdio.h>
int main() {
    char str[100];
    char tar;
    int count =0;
    printf("Enter the string and targetted value");
    scanf("%s %c" , str , &tar);
    for(int i=0 ; str[i] != '\0' ; i++){
        if(str[i] == tar){
            count++;
        }
    }
    printf("%d" , count);
    return 0;
}