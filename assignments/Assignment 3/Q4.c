/*
 * Creator: Muhammad Abser Mansoor
 * Date: 6/12/23
 * Desc: Company management system using structs.
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

struct Worker {
	char id[100];
	char fname[100];
	char lname[100];
	int sal;
	char joind[100];
	char dep[100];
};

struct Bonus {
	int id;
	char bonusd[100];
	int bonus;
};

struct Title {
	int id;
	char title[100];
	char affd[100];
};

void identity() {
	printf("Code by Muhammad Abser Mansoor 23K-0030\n\n\n");
}

int workerdepwisemax(struct Worker workers[],int k) {
	int max = 0;
	int maxi = 0;
	char *dep[3] = {"HR","Admin","Account"};
	for (int i = 0;i < 8;i++) {
		if (!(strcmp(workers[i].dep,dep[k]))) {
			if (workers[i].sal > max) {
				max = workers[i].sal;
				maxi = i;
			}
		}
	}
	return maxi;
}

int totdepwisemax(struct Worker workers[],int k) {
	char *dep[3] = {"HR","Admin","Account"};
	int sum = 0;
	printf("%s-",dep[k]);
	for (int i = 0;i < 8;i++) {
		if (!(strcmp(workers[i].dep,dep[k]))) {
			sum += workers[i].sal;
		}
	}
	return sum;
}

void workermax(struct Worker workers[]) {
	for (int i = 0;i < 3;i++) {
		printf("|");
		int maxworker = workerdepwisemax(workers,i);
		char *joind = strtok(workers[maxworker].joind, " ");
		printf("%-6s| %-10s| %-10s| %-10d| %-15s| %-10s",workers[maxworker].id,workers[maxworker].fname,workers[maxworker].lname,workers[maxworker].sal,joind,workers[maxworker].dep);
		printf("|\n");
	}
}

void totmax(struct Worker workers[]) {
	for (int i = 0;i < 3;i++) {
		int sum = totdepwisemax(workers,i);
		printf("%d\n",sum);
	}
}

void main() {
	identity();
	struct Worker workers[8] = {
		{"001", "Monika", "Arora", 100000, "2014-02-20 09:00:00", "HR"},
		{"002", "Niharika", "Verma", 80000, "2014-06-11 09:00:00", "Admin"},
		{"003", "Vishal", "Singhal", 300000, "2014-02-20 09:00:00", "HR"},
		{"004", "Amitabh", "Singh", 500000, "2014-02-20 09:00:00", "Admin"},
		{"005", "Vivek", "Bhati", 500000, "2014-06-11 09:00:00", "Admin"},
		{"006", "Vipul", "Dewan", 200000, "2014-06-11 09:00:00", "Account"},
		{"007", "Satish", "Kumar", 75000, "2014-01-20 09:00:00", "Account"},
		{"008", "Geetika", "Chauhan", 90000, "2014-04-11 09:00:00", "Admin"},
	};
	struct Bonus bonuses[5] = {
		{1, "2016-02-20 00:00:00", 5000},
		{2, "2016-06-11 00:00:00", 3000},
		{3, "2016-02-20 00:00:00", 4000},
		{1, "2016-02-20 00:00:00", 4500},
		{2, "2016-06-11 00:00:00", 3500}
	};

	struct Title titles[8] = {
		{1, "Manager", "2016-02-20 00:00:00"},
		{2, "Executive", "2016-06-11 00:00:00"},
		{8, "Executive", "2016-06-11 00:00:00"},
		{5, "Manager", "2016-06-11 00:00:00"},
		{4, "Manager", "2016-06-11 00:00:00"},
		{7, "Asst. Manager", "2016-06-11 00:00:00"},
		{6, "Executive", "2016-06-11 00:00:00"},
		{3, "Lead", "2016-06-11 00:00:00"}
	};
	workermax(workers);
	printf("\n");
	totmax(workers);
}
