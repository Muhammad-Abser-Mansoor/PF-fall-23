/* Programmer: Muhammad Abser mansoor
* Date: 10/10/2023
* Task: Matrix Multiplication.
*/

#include <stdio.h>

int main() {
    int m1[100][100];
    int m2[100][100];
    int ans[100][100];
    int r1,r2,c1,c2,n,sum;
    printf("Enter number of rows of first matrix ");
    scanf("%d",&r1);
    printf("Enter number of columns of first matrix ");
    scanf("%d",&c1);
    printf("Enter number of rows of second matrix ");
    scanf("%d",&r2);
    printf("Enter number of columns of second matrix ");
    scanf("%d",&c2);
    if (c1 != r2) {
        printf("Invalid matrices");
        return 0;
    }
    for (int i =0;i<r1;i++) {
        for (int j = 0;j<c1;j++) {
            printf("Enter element ");
            scanf("%d",&n);
            m1[i][j]=n;
        }
    }
    for (int i =0;i<r2;i++) {
        for (int j = 0;j<c2;j++) {
            printf("Enter element ");
            scanf("%d",&n);
            m2[i][j]=n;
        }
    }
    int k = 0;
    for (int i = 0;i<r1;i++) {
        for (int j = 0;j<c2;j++) {
            k = 0;
            for (int l = 0;l<r2;l++) {
                ans[i][j] += m1[i][k]*m2[l][j];
                k++;
            }
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}//end main
