#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int b=n;
    int ans = 0;
    int place = 1;
    int digit=0;
    while(b>0){
        int a = b%10;
        digit++;
        b=b/10;

    }
    for(int i = 0; i < digit; i++) {
        int lastDig = n % 10;
        ans = ans + (!lastDig) * place;
        n = n / 10;
        place = place * 10;
    }

printf("%0*d", digit, ans);
    return 0;
}