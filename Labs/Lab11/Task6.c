#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date date;
    printf("Enter the current date ");
    scanf("%d:%d:%d",&date.day,&date.month,&date.year);
    date.day += 45;
    while (date.day > 30) {
        date.day = date.day-30;
        date.month++;
    }
    if (date.month > 12) {
        date.month = date.month%12;
        date.year++;
    }
    printf("45 days later date will be %d:%d:%d",date.day,date.month,date.year);
    return 0;
}
