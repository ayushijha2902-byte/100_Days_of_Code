#include <stdio.h>

int main() {
    int stars, spaces;

    for (int i = 0; i < 7; i++) {

        if (i <= 3) {
            stars = 2 * i + 1;
            spaces = 3 - i;
        } else {
            stars = (7 - i) * 2 - 1;
            spaces = i - 3;
        }

        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }

        for (int k = 0; k < stars; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}