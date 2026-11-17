#include <stdio.h>
int main() {
    int n ,a=0;
    printf("Enter a number");
    scanf("%d" , &n);
    while(n>0){
        a = n%10 + a;
        n = n/10;
    }
    printf("%d" , a);
    return 0;
}