/*
 * Creator: Muhammad Abser Mansoor
 * Date: 20/11/23
 * Description: Make 2 structs and input/output information for 5 students
 */

#include <stdio.h>
#include <string.h>

struct Register {
	int CourseId;
	char CourseName[100];
} ;

struct Student {
	struct Register course;
	int StudentId;
	char Firstname[100];
	char Lastname[100];
	char cellno[100];
	char email[100];
} ;


void input(struct Student students[5])
{
	for (int i = 0; i < 5; i++) {
		printf("Student %d:\n", i+1);
		printf("Enter student id: ");
		scanf("%d", &students[i].StudentId);

		printf("Enter first name: ");
		scanf("%s", &students[i].Firstname);

		printf("Enter last name: ");
		scanf("%s", &students[i].Secondname);

		printf("Enter cell number: ");
		scanf("%s", &students[i].cellno);

		printf("Enter email: ");
		scanf("%s", &students[i].email);

		printf("Enter student's course id: ");
		scanf("%d", &students[i].course.CourseId);

		printf("Enter student's course name: ");
		scanf("%s", &students[i].course.CourseName);

		printf("\n");
	}
}

void output(struct Student students[5]){
	for (int i = 0; i < 5; i++) {
		printf("\nStudent %d\n", i+1);
		printf("\nStudent id: %d\nFirst name: %s\nLast name: %s\nCell number: %s\nEmail: %s\nCourse ID: %d\nCourse name: %s\n",students[i].StudentId,students[i].Firstname,students[i].Lastname,students[i].cellno,students[i].email,students[i].course.CourseId,students[i].course.CourseName
		);
	}
}

int main() {
	struct Student students[5];
	input(students);
	output(students);
	return 0;
}
