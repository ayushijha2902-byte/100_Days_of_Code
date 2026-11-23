#include <stdio.h>
enum months{
    JAN = 1,
    FEB,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUG,
    SEPT,
    OCT,
    NOV,
    DEC,
};
int main() {
    enum months month;
    month = 2;
    switch(month) {
        case JAN:
        case MARCH:
        case MAY:
        case JULY:
        case AUG:
        case OCT:
        case DEC:
            printf("31 days");
            break;
        case APRIL:
        case JUNE:
        case SEPT:
        case NOV:
            printf("30 days");
            break;
        case FEB:
            printf("28/29 days");
            break;

}
return 0;
}