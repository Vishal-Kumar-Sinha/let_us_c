#include <stdio.h>
#include <stdbool.h>
struct date {
    int day;
    int month;
    int year;
};

bool sameDate(struct date *dates) {
    if (dates[0].day == dates[1].day && dates[0].month == dates[1].month && dates[0].year == dates[1].year)
        return true;
    return false;
}

void printDates(struct date *dates) {
    for (int i = 0; i < 2; i++) {
        printf("Date %d:: ", i + 1);
        printf("%d/%d/%d\n", dates[i].day, dates[i].month, dates[i].year);
    }
}
int main() {
    struct date dates[2];
    for (int i = 0; i < 2; i++) {
        printf("date %d::\n ", i + 1);
        printf("Enter day:: ");
        scanf("%d", &dates[i].day);
        printf("Enter month:: ");
        scanf("%d", &dates[i].month);
        printf("Enter year:: ");
        scanf("%d", &dates[i].year);
    }
    printDates(dates);
    if (sameDate(dates))
        printf("same date");
    else
        printf("not same date");
    return 0;
}
