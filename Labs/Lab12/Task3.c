/* Programmer: Muhammad Abser mansoor
 * Date: 10/10/2023
 * Task: Create and store data using filing and structs
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct course {
    int code;
    char name[100];
    float gpa;
    int cred;
    int sem; // struct initialisation
};

int main() {
    struct course c[100]; // struct array
    FILE *f = fopen("info.txt","a");
    for (int i = 0;i<1;i++) {
        printf("Enter course code ");
        scanf("%d",&c[i].code);
        printf("Enter Course Name ");
        scanf("%s",c[i].name);
        printf("Enter GPA "); // Taking 3 inputs for each struct variable
        scanf("%f",&c[i].gpa);
        printf("Enter Semester ");
        scanf("%d",&c[i].sem);
        printf("Enter Semester ");
        scanf("%d",&c[i].cred);
        fprintf(f,"%d,%s,%f,%d,%d\n",c[i].code,c[i].name,c[i].gpa,c[i].sem,c[i].cred);
    }
    fclose(f);
    char x;
    printf("View transcript? y or n  ");
    scanf(" %c",&x);
    if (x == 'y') {
        FILE *f = fopen("info.txt","r");
        char r[200];
        fgets(r,200,f);
        printf("%s",r);
        fclose(f);
    }
    char g;
    printf("Calculate CGPA? y or n  ");
    scanf(" %c",&g);
    if (g == 'y') {
        FILE *f = fopen("info.txt","r");

    }
}
