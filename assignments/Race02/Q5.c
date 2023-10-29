#include <stdio.h>

// Checks if the array already contains the current number
int dup(int ar[],int first,int freq) {
    for (int i = 0;i<freq;i++) {
        if (ar[i] == first) {
            return 1;
        }
    }
    return 0;
}
/* Programmer: Abser Mansoor
 * Date: 28/10/2023
 * Desc.: Find Ramanujan-Hardy numbers until n^3
 */
int main() {
    int n;
    printf("Enter n for which ramanujan numbers will be found until n^3 ");
    scanf("%d",&n);
    int ar[1000] = {0};
    int numbers = 0;
    for (int i = 0;i<n*n*n;i++) {
        for (int j = 0;j<n*n*n;j++) {
            for (int k = 0;k<n*n*n;k++) {
                for (int m = 0;m<n*n*n;m++) {
                    int first = k*k*k + m*m*m;
                    if (i != j && i != k && i != m && i*i*i + j*j*j == first) {
                        if (dup(ar,first,numbers) == 0) {
                            printf("%d, ",first);
                            ar[numbers] = first;
                            numbers++;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
