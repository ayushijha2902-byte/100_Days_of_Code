#include <stdio.h>
int main() {
    int n;
    int count[10] = {0};
    scanf("%d", &n);
    while(n > 0) {
        int digit = n % 10;
        count[digit]++;
        n = n / 10;
    }
    int max = 0;
    int ans = 0;
    for(int i = 0; i < 10; i++) {
        if(count[i] > max) {
            max = count[i];
            ans = i;
        }
    }
    printf("%d", ans);
    return 0;
}