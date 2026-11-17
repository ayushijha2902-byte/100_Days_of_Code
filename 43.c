#include <stdio.h>
int main() {
    int n , copy, sum=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    copy = n;
    while(n>0){
        int c = n%10;
        int b=1;
    for(int i =1 ; i<=c ; i++ ){
        b*= i;
    }
    sum +=b;
    n = n/10;
    }
    if(sum == copy){
        printf("Strong number");
    }
    else{
        printf("Not a strong number");
    }
    return 0;
}