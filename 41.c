#include <stdio.h>
#include <math.h>
int main() {
    int n, digits = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    int original = n;
    while (original > 0) {
        digits++;
        original /= 10;
    }
    original = n;
    int last = n % 10;
    int first;
    while (n > 0) {
        first = n % 10;
        n /= 10;
    }
    int divisor = (int)pow(10, digits - 1);
    int middle = (original % divisor) / 10;
    int ans = last * divisor + middle * 10 + first;
    printf("%d", ans);
    return 0;
}