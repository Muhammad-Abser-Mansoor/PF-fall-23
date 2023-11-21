/*
 * Programmer: Muhammad Abser mansoor
 * Date: 11/21/2023
 * Desc.: Use structs to store info about engine parts and display when a specific roll no. within a range is found
 */
#include <stdio.h>
#include <string.h>
struct automobile {
    int year;
    char material[100];
    char sno[100];
    int quantity;
};
int main() {
    struct automobile engine[450];
    for (int i = 0;i<1;i++) {
        printf("Enter year of manufacture ");
        scanf("%d",&engine[i].year);
        printf("Enter material name ");
        scanf("%s",&engine[i].material);
        printf("Enter serial no. ");
        scanf("%s",&engine[i].sno);
        printf("Enter Quantity ");
        scanf("%d",&engine[i].quantity);
    }
    for (int i = 0;i<10;i++) {
        if (strcmp("BB1",engine[i].sno) > 0 && strcmp("CC6",engine[i].sno) < 0) {
            printf("Year of manufacture is %d\nMaterial is %s\nSerial number is %s\nQuantity produced is %d\n",engine[i].year,engine[i].material,engine[i].sno,engine[i].quantity);
        }
    }
    return 0;
}
