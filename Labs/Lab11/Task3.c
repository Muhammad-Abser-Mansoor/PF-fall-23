/*
 * Programmer: Muhammad Abser mansoor
 * Date: 11/21/2023
 * Desc.: Use structs to store info about engine parts and display when a specific roll no. within a range is found
 */
#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month; //struct initialisation
    int year;
};

void main() {
    int d,m,y;
    struct Date date[100]; // struct array
    printf("Enter Day ");
    scanf("%d",&d);
    printf("Enter Month "); // Entering specific day, month and year for checking
    scanf("%d",&m);
    printf("Enter Year ");
    scanf("%d",&y);
    for (int i = 0;i<1;i++) {
        printf("Enter Day ");
    scanf("%d",&date[i].day);
    printf("Enter Month "); // Entering day, month and year
    scanf("%d",&date[i].month);
    printf("Enter Year ");
    scanf("%d",&date[i].year);
    }
    for (int i = 0;i<1;i++) {
        if (date[i].day == d && date[i].month == m && date[i].year == y) {
            printf("Dates are equal"); // Condition pass
        }
        else {
            printf("Dates are not equal"); // Condition fail
        }
    }
}
