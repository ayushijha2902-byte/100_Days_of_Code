#include <stdio.h>
int main() {
    int n , a ,b=1;
    printf("Enter a number");
    scanf("%d" , &n);
    while(n>0){
        a=n%10;
        if(a%2==1){
            b *= a;
        }
        n=n/10;
    }
    printf("%d" , b);
    return 0;
}