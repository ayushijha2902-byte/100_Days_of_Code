#include <stdio.h>
int main() {
    int n;
    float sum =1;
    printf("Enter the number: ");
    scanf("%d", &n);
    float num1 = 1 , num2 = 2;
    for(int i =2 ; i<=n ; i++){
    num1 += 2;
    num2 += 2;
    sum += (num1/num2);
    }
    printf("%.1f" , sum);
}