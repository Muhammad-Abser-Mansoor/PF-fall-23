/* Programmer: Muhammad Abser Mansoor
 * Date: 12/2/2023
 * Desc: Read a matrix from a file and create a submatrix containing max values from subblocks of the original matrix.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int **creatematrix(int n) {
	int **mat = (int **)malloc(sizeof(int *) * n);
	int *block = (int *)malloc(sizeof(int) * n*n);
	for (int i = 0; i < n; i++){
         mat[i] = block + i*n;
    }
	return mat;
}

void readfile(FILE *fp, int **mat, int n) {
	char buf[100];
	for (int i = 0; !feof(fp) && i < n; i++) {
		fgets(buf,100,fp);
		buf[strcspn(buf, "\n")] = 0;
		char *num = strtok(buf, " ");
		for (int j = 0; num != NULL && j < n; j++) {
			mat[i][j] = atoi(num);
			num = strtok(NULL, " ");
		}
	}
}

void printmatrix(int **mat, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d  ", mat[i][j]);
		}
		printf("\n\n");
	}
}

int findmax(int **mat, int i, int j, int n) {
	int max = 100000;
	for (int k = i; k < i + n/2 && k < n; k++) {
		for (int q = j; q < j + n/2 && q < n; q++) {
			if (mat[k][q] > max) {
              max = mat[k][q];
          }
    }
	}
	return max;
}

int **createsubmatrix(int **mat, int n) {	
	int **smat = creatematrix(n/2);
	for (int i = 0; i < n; i += 2) {
		for (int j = 0; j < n; j += 2) {
			smat[i/2][j/2] = findmax(mat, i, j, n);
		}
	}
	return smat;
}

int main(int argc, char const *argv[]) {
	int n = atoi(argv[1]);
	while (!(n == 2 || n == 4 || n == 8)) {
		printf("Incorrect dimension\nEnter dimension again: ");
		scanf("%d", &n);
	}
	FILE *fp = fopen(argv[2], "r");
	int **mat = creatematrix(n);
	readfile(fp, mat, n);
	printmatrix(mat, n);
	int **smat = createsubmatrix(mat, n);
	printf("\nSubmatrix with maximum values:\n");
	printmatrix(smat, n/2);
	free(smat);
	free(*mat);
	free(mat);
	return 0;
}
