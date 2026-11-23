#include <stdio.h>
enum status{
    SUCCESS,
    FAILURE,
    TIMEOUT,
};
int main() {
    printf("%d" , SUCCESS);
    printf("%d" , FAILURE);
    printf("%d" , TIMEOUT);
    return 0;
}