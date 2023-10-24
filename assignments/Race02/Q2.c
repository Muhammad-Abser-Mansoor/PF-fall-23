 /* 
  * Programmer: Muhammad Abser Mansoor
  * Date: 24/10/2023
  * Desc: Find submatrix containing only 1s in a larger binary matrix.
  */

#include <stdio.h>

int main() {
    int ar[100][100];
    int one[100][100];
    int a,b,c;
    int avg,max,fif,hun,sum=0;
    printf("Enter columns of matrix ");
    scanf("%d",&b);
    printf("Enter rows of matrix ");
    scanf("%d",&a);
    for (int i = 0;i<a;i++) {
        for (int j = 0;j<b;j++) {
            printf("Enter 1 or 0 in matrix position (%d,%d) ",i,j);
            scanf("%d",&ar[i][j]);
            if (ar[i][j] != 0 && ar[i][j] != 1) {
                printf("Ya done fked up");
                break;
            }
        }
    }
    int p=0;
    if (a>b) {
        p = b;
    }
    else if (b>a) {
        p = a;
    }
    else if (b == a) {
        p = a;
    }
    int m,n = 0;
    for (p = a;p>=2;p--) {
        m,n=0;
        for (int j = 0;j<a-p+1;j=j+p) {
            for (int k = 0;k<b-p+1;k=k+p) {
                if (ar[j][k] != 1) {
                    k = b-p;
                }
                else {
                    ar[j][k] = one[m][n];
                    n++;
                    if (n == p-1 && m != p-1) {
                        n = 0;
                        m++;
                    }
                }
            }
            
        }
        if (m == a-1 && n == a-1) {
            break;
        }
    }
    printf("largest submatrix of 1s is a %dx%d",a,a);
    return 0;
}
