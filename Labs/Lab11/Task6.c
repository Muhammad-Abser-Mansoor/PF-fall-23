/* Programmer: Abser Mansoor
 * Date: 23/11/2023
 * Desc.: Use structs to store date and display change after 45 days are added
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
