#include <stdio.h>
void Maxlocal (int n) {
    int f,g = 0;
    int matrix[3][3];
    int Maxlocal[n-2][n-2];
    for (int k = 0;k<n;k+3) {
        for (int m = 0;m<n;m+3) {
            for (int i = 0;i<k+3;i++) {
                for (int j = 0;j<m+3;j++) {
                    printf("Enter element ");
                    scanf("%d",&f);
                    matrix[i][j] = f;
                }
            }
            if (m!=0) {
                g = 0;
                for (int i = 0;i<k+3;i++) {
                    for (int j = 0;j<m+3;j++) {
                        if (g < matrix[i][j]) {
                            g = matrix[i][j];
                        }
                    }
                }
                Maxlocal[k][m-1]=g;
            }
        }
    }
    for (int i = 0;i<n-2;i++) {
        for (int j = 0;j<n-2;j++) {
            printf("%d, ",Maxlocal[i][j]);
        }
        printf("\n");
    }
    return;
}
int main() {
    int n = 0;
    printf("Enter size of n by n grid ");
    scanf("%d",&n);
    Maxlocal(n);
    return 0;
}
