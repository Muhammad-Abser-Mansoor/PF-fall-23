/* Programmer: Abser Mansoor
 * Date: 23/11/2023
 * Desc.: Use nested structs to store and display information
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    char id[100];
    char name[100];
    int salary;
};

struct Organization {
    char name[100];
    char number[100];
    struct Employee emp;
};

int main() {
    struct Organization org[123];
    strcpy(org[1].name,"NU-Fast");
    strcpy(org[1].number,"NUFAST123ABC");
    strcpy(org[1].emp.id,"127");
    strcpy(org[1].emp.name,"Linus Sebastien");
    org[1].emp.salary = 400000;
    printf("Organization Name: %s\nOrganization Number: %s\nEmployee id: %s\nEmployee Name: %s\nEmployee Salary: %d",org[1].name,org[1].number,org[1].emp.id,org[1].emp.name,org[1].emp.salary);
}
