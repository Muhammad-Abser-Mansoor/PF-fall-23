/*
 * Creator: Muhammad Abser Mansoor
 * Date: 4/12/23
 * Desc: Take information from 2 files and write the merged info into a 3rd file
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void identity() {
	printf("Code by Muhammad Abser Mansoor 23K-0030\n\n\n");
}

char *getname(char x[], FILE *per) {
	if (per == NULL) {
		return NULL;
	}
	char *name = (char *)malloc(sizeof(char) * 100);
	char buf[100];
	char curid[100];
	while (!(feof(per))) {
		fgets(buf, 100, per);
		buf[strcspn(buf, ",")] = 0;
		strcpy(curid,strtok(buf," "));
		if (!(strcmp(curid,x))) {
			strcpy(name,strtok(NULL," "));
			return name;
		}
	}
	return NULL;
}

char *getsalary(char x[], FILE *dep) {
	if (dep == NULL) {
		return NULL;
	}
	char *salary = (char *)malloc(sizeof(char) * 100);
	char buf[100];
	char curid[100];
	while (!(feof(dep))) {
		fgets(buf, 100, dep);
		buf[strcspn(buf, ",")] = 0;
		strcpy(curid,strtok(buf," "));
		if (!(strcmp(curid,x))) {
			strcpy(salary,strtok(NULL," "));
			return salary;
		}
	}
	return NULL;
}

int infile(char x[], FILE *cmb) {
	if (cmb == NULL) {
		return 0;
	}
	char buf[100];
	while (!(feof(cmb))) {
		fgets(buf, 100, cmb);
		buf[strcspn(buf, ",")] = 0;
		char *curid = strtok(buf," ");
		if (!(strcmp(curid,x))) {
			return 1;
		}
	}
	return 0;
}

void main() {
	int a =0;
	identity();
	while (a != 1) {
	char x[10];
	printf("Enter ID to merge: ");
	scanf("%s",x);
	x[strcspn(x, ",")] = 0;
	FILE *dep = fopen("Department.txt","r");
	FILE *per = fopen("Personal.txt","r");
	FILE *cmb = fopen("Combine.txt","r");
	char naam[100];
	char tankhwa[100];
	strcpy(naam,getname(x,per));
	strcpy(tankhwa,getsalary(x,dep));
	printf("%s %s %s\n",x,naam,tankhwa);
	if (infile(x,cmb) == 0) {
		fclose(cmb);
		cmb = fopen("Combine.txt","a");
		char combine[100];
		sprintf(combine,"%s %s %s\n",x,naam,tankhwa);
		fputs(combine,cmb);
		printf("Information Saved");
	}
	else {
		printf("This information already exists");
	}
	fclose(cmb);
	fclose(dep);
	fclose(per);
	printf("\n1 or 0; 1 closes ");
	scanf("%d",&a);
	}
}
