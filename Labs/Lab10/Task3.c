/*Programmer: Muhammad Abser Mansoor
 *Date: 11/20/2023
 *Desc.:Dynamic Memory Allocation for a 2D array and filling it with prime numbers
 */

#include <stdio.h>
#include <stdlib.h>
int prime(int n) {
    for (int i = 2;i*i <= n;i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int **createarray(int x, int y) {
	int **ar = (int **)malloc(sizeof(int *) * y);
	for (int i = 0; i < y; i++) {
	    ar[i] = (int *)malloc(sizeof(int) * x);
	}
	for (int i = 0, num = 2; i < y; i++) {
		for (int j = 0; j < x; j++) {
			for(;!prime(num);num++) {
			}
			ar[i][j] = num++;
		}
	}
    return ar;
}


void printarray(int **ar,int r,int c) {
    for (int i = 0;i<r;i++) {
        for (int j = 0;j<c;j++) {
            printf("%d ",ar[i][j]);
        }
        printf("\n");
    }
}

void Freewilly(int **ar,int r) {
    for (int i = 0;i<r;i++) {
        free(ar[i]);
    }
    free(ar);
}

int main() {
    int r = 4;
    int c = 4;
    int **ar = createarray(r,c);
    printarray(ar,r,c);
    Freewilly(ar,r);
    return 0;
}
