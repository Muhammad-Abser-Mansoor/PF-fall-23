/*
 * Programmer: Muhammad Abser mansoor
 * Date: 11/21/2023
 * Desc.: Use structs to store info about engine parts and display when a specific roll no. within a range is found
 */
#include <stdio.h>
#include <string.h>

struct employee {
    char name[100];
    int salary; //struct initialisation
    int workhour;
};

void main() {
    struct employee boy[10];
    for (int i = 0;i<1;i++) {
    printf("Enter name ");
    scanf("%s",&boy[i].name);
    printf("Enter salary "); // Entering values
    scanf("%d",&boy[i].salary);
    printf("Enter hours worked ");
    scanf("%d",&boy[i].workhour);
    }
    for (int i = 0;i < 1;i++) {
    if (boy[i].workhour > 8) {
        boy[i].salary += 50;
    }
    else if (boy[i].workhour > 10) {
        boy[i].salary += 100;
    } // Conditions
    else if (boy[i].workhour >= 12) {
        boy[i].salary += 150;
    }
    printf("Salary is %d",boy[i].salary);
    }
}
