/*
 * Creator: Muhammad Abser Mansoor
 * Date: 4/12/23
 * Desc: Use structs to get efficiency tables for different departments and their employees.
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

struct Employee {
	char name[100];
	char role[100];
	int communication;
	int teamwork;
	int creativity;
};

void identity() {
	printf("Code by Muhammad Abser Mansoor 23K-0030\n\n\n");
}

int depcheck(bool deparcheck[], char *departments[4], char c[]) {
	for (int i = 0;i < 4;i++) {
		if (!(strcmp(c,departments[i])) && deparcheck[i] == false) {
			deparcheck[i] = true;
			return 1;
		}
	}
	return 0;
}

int rolecheck(bool rolcheck[], char *roles[5], char d[]) {
	for (int i = 0;i < 5;i++) {
		if (!(strcmp(d,roles[i])) && rolcheck[i] == false) {
			rolcheck[i] = true;
			return 1;
		}
	}
	return 0;
}

void print(struct Employee person[])
{
	printf("%7c%-12s|%9s%4c|%15s%-2c|%11s%-2c|%12s%-2c|\n", 
		' ', "Name", "Role", ' ', "Communication", ' ', "Team Work", ' ', "Creativity", ' '
	);
	for (int i = 0; i < 5; i++) {
		printf("%2c%-17s|%2c%-11s|%10d%-7c|%8d%-5c|%8d%-6c|\n",
			' ', person[i].name, ' ', person[i].role, person[i].communication, ' ', person[i].teamwork, ' ',person[i].creativity, ' '
		);
	}
}


void assignment(char *randname[20],char c[],int h,int best[],int max,int maxi) {
	char *roles[5] = {"Director", "Executive", "Manager", "Employee", "Trainee"};
	bool rolcheck[5] = {false,false,false,false,false};
	struct Employee person[5];
	for (int i = h*5, j = 0;j < 5;i++,j++) {
		char d[100];
		strcpy(person[j].name,randname[i]);
		printf("Enter role ");
		scanf("%s",d);
		while (rolecheck(rolcheck,roles,d) == 0) {
		printf("Enter role again ");
		scanf("%s",d);
		}
		strcpy(person[j].role,d);
		person[j].communication = (rand() % 100) + 1;
		person[j].teamwork = (rand() % 100) + 1;
		person[j].creativity = (rand() % 100) + 1;
		best[h] += person[j].creativity + person[j].communication + person[j].teamwork;
	}
	if (best[h] > max) {
		max = best[h];
		maxi = h;
	}
	print(person);
}

int main() {
	identity();
	srand(time(NULL));
	int best[4] = {0};
	int max = 0;
	int maxi = 0;
	char orderdep[4][100];
	char *departments[4] = {"HR","Finance","Marketing","Logistics"};
	bool deparcheck[4] = {false,false,false,false};
	char *randname[20] = {"Emily Johnson",
							  "Xavier Rodriguez",
							  "Olivia Smith",
							  "Benjamin Lee",
							  "Sophia Williams",
							  "Jackson Brown",
							  "Ava Martinez",
							  "Liam Thompson",
							  "Isabella Nguyen",
							  "Noah Garcia",
							  "Charlotte Patel",
							  "Ethan Jones",
							  "Mia Davis",
							  "Alexander Wilson",
							  "Harper Lopez",
							  "Lucas Khan",
							  "Amelia Murphy",
							  "Mason Sullivan",
							  "Evelyn Kim",
							  "Oliver Wright"};
	for (int i = 0;i < 4;i++) {
		char c[100];
		printf("Enter department ");
		scanf("%s",c);
		while (depcheck(deparcheck,departments,c) == 0) {
			printf("Enter department again ");
			scanf("%s",c);
		}
		strcpy(orderdep[i],c);
		assignment(randname,c,i,best,max,maxi);
	}
	printf("\nThe Best Department is %s",orderdep[maxi]);
}
