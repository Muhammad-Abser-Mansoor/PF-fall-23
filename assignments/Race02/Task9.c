/*
 * Creator: Muhammad Abser Mansoor
 * Date: 29/10/23
 * Desc: prints out a spiral pattern in a 2d array
 */

#include <stdio.h>

void Output(int spiral[][100], int n)
{
	for (int i = 0; i < n && printf("\n"); i++) {
		for (int j = 0; j < n; j++) {
			printf("%-3d ", spiral[i][j]);
		}
	}
}

void Spiral(int spiral[][100], int n, int type) {
	int p, j, dir, i = 0;
	if (type) {
		p = 1;
		j = 0;
		dir = 1;
	} else {
		p = n*n;
		j = n-1;
		dir = 3;
	}
	for (; (p <= n*n && type) || (p >= 1 && !type); (type) ? p++ : p--) {
		spiral[i][j] = p;

		switch (dir) {
			case 1:
				if (j+1 < n && !spiral[i][j+1]) {
					j++;
				}
				else {
					if (type) {
						dir++;
						i++;
					}
					else {
						dir=4;
						i--;
					} 
				}
				break;
			case 2:
				if (i+1 < n && !spiral[i+1][j]){ 
					i++;
				}
				else {  
					if (type) {
						dir++;
						j--;
					}
					else {
						dir--;
						j++;
					} 
				}
				break;
			case 3: 
				if (j > 0 && !spiral[i][j-1]) {
					j--;
				}
				else {
					if (type) {
						dir++;
						i--;
					}
					else {
						dir--;
						i++;
					}
				}
				break;
			case 4:
				if (i > 0 && !spiral[i-1][j]) {
				i--;
				} 
				else {
					if (type) {
						dir=1;
						j++;
					}
					else {
						dir--;
						j--;
					}
				}
				break;
		}
	}
}

int main() {
	int spiral[100][100] = {0}, n, type;
	printf("Enter spiral length: ");
	scanf("%d", &n);
	printf("What type of spiral is needed? (1)Inward/(0)Outward ");
	scanf("%d", &type);
	Spiral(spiral, n, type);
	Output(spiral, n);
	return 0;
}
