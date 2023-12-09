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

void checkdup(double ar[],int len) {
	for (int i = 0;i < len;i++) {
		for (int j = 0;j < len;j++) {
			if (ar[i] == ar[j] && i != j) {
				for (int k = j;k < len;k++) {
					int temp = ar[k+1];
					ar[k+1] = ar[k];
					ar[k] = temp;
				}
			}
		}
	}
}

void main() {
	double ar1[5] = {-10.5,-1.8,3.5,6.3,7.2};
	double ar2[3] = {-1.8,3.1,6.3};
	int l1 = sizeof(ar1)/sizeof(ar1[0]);
	int l2 = sizeof(ar2)/sizeof(ar2[0]);
	double *ar = (double*)malloc(sizeof(double)*(l1+l2));
	for (int i = 0;i<l1;i++) {
		*(ar+i) = ar1[i];
	}
	int j = 0;
	for (int i = l1;i<l2+l1;i++) {
		*(ar+i) = ar2[j];
		j = j + 1;
	}
	for (int i = 0;i < (l2+l1);i++) {
		printf("%f ",ar[i]);
	}
	checkdup(ar,l1+l2);
	printf("\n");
	for (int i = 0;i < (l2+l1);i++) {
		int pos = 0;
		for (int j = 0;j < (l2+l1);j++) {
			if (*(ar+i) > *(ar+j)) {
				pos++;
			}
		}
		double temp = *(ar+pos);
		*(ar+pos) = *(ar+i);
		*(ar+i) = temp;
	}
	for (int i = 0;i < (l2+l1);i++) {
		printf("%f ",*(ar+i));
	}
}
