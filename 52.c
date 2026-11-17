#include <stdio.h>
int main() {
    int stars;
    for(int i=0 ; i<5 ; i++){
        if (i<=2){
            stars = (2*i)+1; 
        }
        else{
            stars = (5-i)*2 -1;
        }
        for(int j = 0; j<stars ; j++){
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}