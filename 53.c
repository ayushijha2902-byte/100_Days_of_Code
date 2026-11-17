#include <stdio.h>
int main() {
    int stars;
    for(int i =0 ; i<9; i++){
        if(i<=4){
            stars = 2*i +1;
        }
        else{
            stars = (9-i)*2 -1;
        }
        for (int j=0 ; j<stars ; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}