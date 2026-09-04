//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>
int main(){
    int t;
    printf("Enter time in seconds");
    scanf("%d", &t);
    int hours = (int)(t / 3600);
    int minutes = (int)(t / 60) % 60    ;
    int seconds = (int)(t) % 60;
    printf("%d seconds is equal to %d hours, %d minutes and %d seconds", t, hours, minutes, seconds);
    return 0;

}
