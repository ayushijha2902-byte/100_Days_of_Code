#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int vowel =0 , consonant = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            vowel++;
        }
        else{
            consonant++;
        }
    }
    printf("Number of vowels: %d\n" , vowel);
    printf("Number of consonants: %d\n" , consonant);
    return 0;
}