#include <stdio.h>

int main() {
    int ar[100][100];
    int one[100][100];
    int a,b,c;
    int avg,max,fif,hun,sum=0;
    printf("Enter breadth of matrix ");
    scanf("%d",&a);
    printf("Enter length of matrix ");
    scanf("%d",&b);
    for (int i = 0;i<a;i++) {
        for (int j = 0;j<b;j++) {
            printf("Enter 1 or 0 in matrix position (%d,%d) ",i,j);
            scanf("%d",&ar[i][j]);
            if (ar[i][j] != 0 || ar[i][j] != 1) {
                printf("Ya done fked up");
                break;
            }
        }
    }
    for (int i = 2;i<a;i++) {
        for (int j = 0;j<a-i+1;j=j+i) {
            for (int k = 0;k<b-i+1;k=k+i) {
                if (ar[j][k] != 1) {
                    k = b-i;
                }
                else {
                    ar[j][k] = one[m][n];
                    n++;
                }
            }
            
        }
    }
    return 0;
}
