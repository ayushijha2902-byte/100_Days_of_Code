#include <stdio.h>
int main(){
    char str1[100] , str2[100];
    printf("Enter two strings: ");
    scanf("%s %s", str1 , str2);
    n = sizeof(str2);
    int count;
    for(int i =0 ; str[i] != '\0' ; i++){
        for(int j = n-1 ; j>0 ; j--){
            if(str[i] == str[j]){
                count++;
            }
        }
    }
    if(count == n){
        printf("Anagrams");
    }
    else{
        printf("Not anagrams");
    }
    return 0;
}