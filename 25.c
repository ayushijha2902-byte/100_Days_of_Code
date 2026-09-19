//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
int main() {
    char c;
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter the operation: ");
    scanf("%c", &c);
    switch(c){
        case '+':
            printf("Sum=%d\n", a+b);
            break;
        case '-':
            printf("Diff=%d\n", a-b);
            break;
        case '*':
            printf("Product=%d\n", a*b);
            break;
        case '/':
            printf("Quotient=%d\n", a/b);
            break;
        case '%':
            printf("Remainder=%d\n", a%b);
            break;
    }
    return 0;
}