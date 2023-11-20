/* Programmer: Muhammad Abser Mansoor
 * Date: 20/11/2023
 * Description: Find the time taken for the program to run
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int **Arr1(int m,int n) {
    int **ar = (int **)malloc(sizeof(int *) * m);
    for (int i = 0;i<m;i++) {
        ar[i] = (int *)malloc(sizeof(int) * n);
    }
    printf("Done");
    return ar;
}

int **Arr2(int m,int n) {
    // Block is the allocation for all the addresses in the array
    int *block = (int *)malloc(sizeof(int) * m * n);
    // This is the allocation for the pointers to rows
    int **ar = (int **)malloc(sizeof(int *) * m);
    for (int i = 0,j = 0;i<m;i++,j += n) { // Increment by n will move j to the next row
        ar[i] = &block[j]; //Start of each row is being assigned to the row pointers previously allocated
    }
    printf("\nDone\n"); // Used for checking if function even runs
    return ar;
}

float timing(int **ar,int m,int n) {
    clock_t t = clock();
    for (int i = 0;i<m;i++) {
        for (int j = 0;j<n;j++) {
            ar[i][j] *= 3;
        }
    }
    for (int i = 0;i<m;i++) {
        for (int j = 0;j<n;j++) {
            ar[i][j] /= 2;
        }
    }
    t = clock() - t;
    return t/CLOCKS_PER_SEC;
}

int main() {
    int m = 100;
    int n = 100;
    int **ar1 = Arr1(m,n);
    int **ar2 = Arr2(m,n);
    printf("Time is %.fms for array 1\nTime is %.fms for array 2",timing(ar1,m,n)*1000,timing(ar2,m,n))*1000;
    return 0;
}
