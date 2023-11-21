/*
 * Programmer: Muhammad Abser mansoor
 * Date: 11/21/2023
 * Desc.: Use structs to store student information (of upto 450 students) and print their name when a specific condition is passed
 */

struct Student {
    int rollno;
    char name[100];
    char dep[100];
    char course[100];
    int year;
};

void main() {
    struct Student student[450];
    for (int i = 0;i<3;i++) {
        printf("Enter roll number ");
        scanf("%d",&student[i].rollno);
        printf("Enter Name ");
        scanf("%s",&student[i].name);
        printf("Enter Department name ");
        scanf("%s",&student[i].dep);
        printf("Enter Course name ");
        scanf("%s",&student[i].course);
        printf("Enter Year of joining ");
        scanf("%d",&student[i].year);
    }
    int n;
    int k;
    printf("Enter specific year ");
    scanf("%d",&n);
    printf("Enter specific roll number ");
    scanf("%d",&k);
    for (int i = 0;i<3;i++) {
        if (student[i].year == n || student[i].rollno == k) {
            printf("%s",student[i].name);
        }
    }
}
