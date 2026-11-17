
  //  Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010
*/
#include <stdio.h>
int main() {
    int n ,r, a=0 , p=1;
    printf("Enter a number");
    scanf("%d" , &n);
    while(n>0){
        r = n%2;
        a = a + (r*p);
        n =n/2;
        p = p*10;
 }
         printf("%d" , a);

 return 0;
}
