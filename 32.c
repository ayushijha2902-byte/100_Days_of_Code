//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
int main() {
    int n , b ,a=0;
    printf("Enter a number");
    scanf("%d" , &n);
    b=n;
    while(n>0){
        a = (n%10) + (10*a);
        n = n/10;
    }
    if(a==b){
        printf("The number is a palindrome");
    }
    else{
        printf("The number is not a palindrome");
    }
    return 0;
}