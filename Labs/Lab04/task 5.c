#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int abd = 0;
	int abm = 0;
	int aby = 0;
	int bbd = 0;
	int bbm = 0;
	int bby = 0;
	printf("Enter Birthday of first person ");
	scanf("%d", &abd);
	printf("Enter Birthmonth of first person ");
	scanf("%d", &abm);
	printf("Enter Birthyear of first person ");
	scanf("%d", &aby);
	printf("Enter Birthday of second person ");
	scanf("%d", &bbd);
	printf("Enter Birthmonth of second person ");
	scanf("%d", &bbm);
	printf("Enter Birthyear of second person ");
	scanf("%d", &bby);
	int dbd = abd - bbd;
	int dbm = abm - bbm;
	int dby = aby - bby;
	if (dbd < 0) {
		dbm = dbm - 1;
		dbd = dbd + 30;
	}
	if (dbm < 0) {
		dby = dby - 1;
		dbm = dbm + 12;
	}
	dby = abs(dby);
	printf("Age difference in days is ");
	printf("%d", dbd);
	printf("Age difference in months is ");
	printf("%d", dbm);
	printf("Age difference in years is ");
	printf("%d", dby);
	return 0;
}

	
