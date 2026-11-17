//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
int main() {
    int n, original, a , digits=0 , digit , sum=0;
    printf("Enter a number");
    scanf("%d" , &n);
original = n;
    while(n>0){
     digits++;
     n=n/10;
    }
    a=original;
    while(a > 0){
        digit = a % 10;

        int p = 1;
        for(int i = 1; i <= digits; i++){
            p = p * digit;
        }

        sum = sum + p;
        a = a / 10;
    }

   
 if(sum==original){
        printf("The number is a armstrong number");
    }
    else{
        printf("The number is not a armstrong number");
    }
    return 0;
}