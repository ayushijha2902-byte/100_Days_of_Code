#include <stdio.h>

int main() {
    int month, year, days;
    char *monthName;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1:
            monthName = "January";
            days = 31;
            printf("%s %d", monthName, days);
            break;

        case 2:
            monthName = "February";
            printf("Enter year: ");
            scanf("%d", &year);

            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29;
            } else {
                days = 28;
            }

            printf("%s %d", monthName, days);
            break;

        case 3:
            monthName = "March";
            days = 31;
            printf("%s %d", monthName, days);
            break;

        case 4:
            monthName = "April";
            days = 30;
            printf("%s %d", monthName, days);
            break;

        case 5:
            monthName = "May";
            days = 31;
            printf("%s %d", monthName, days);
            break;

        case 6:
            monthName = "June";
            days = 30;
            printf("%s %d", monthName, days);
            break;

        case 7:
            monthName = "July";
            days = 31;
            printf("%s %d", monthName, days);
            break;

        case 8:
            monthName = "August";
            days = 31;
            printf("%s %d", monthName, days);
            break;

        case 9:
            monthName = "September";
            days = 30;
            printf("%s %d", monthName, days);
            break;

        case 10:
            monthName = "October";
            days = 31;
            printf("%s %d", monthName, days);
            break;

        case 11:
            monthName = "November";
            days = 30;
            printf("%s %d", monthName, days);
            break;

        case 12:
            monthName = "December";
            days = 31;
            printf("%s %d", monthName, days);
            break;

        default:
            printf("Invalid month number!\n");
            return 0;
    }

    return 0;
}