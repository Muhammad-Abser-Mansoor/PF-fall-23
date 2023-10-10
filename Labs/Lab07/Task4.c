/* Programmer: Muhammad Abser mansoor
* Date: 10/10/2023
* Task: Find out if an input matrix is asymmetric.
*/

#include <stdio.h>

int main() {
    int ar[100][100];
    int r,c,n,m,check;
    printf("Enter Number of rows ");
    scanf("%d",&r);
    printf("Enter Number of columns ");
    scanf("%d",&c);
    for (int i = 0;i<r;i++) {
        for (int j = 0;j<c;j++) {
            printf("Enter element of matrix ");
            scanf("%d",&n);
            ar[i][j] = n;
        }
    }
    for (int i = 0;i<r;i++) {
        for (int j = 0;j<c;j++) {
           if (ar[i][j] == ar[j][i]) {
               continue;
           }
           else {
               m++;
               break;
           }
        }
    }
    if (m != 0) {
        printf("Matrix is not Asymmetric"); }
    else {
        printf("Matrix is Asymmetric");
    }
    return 0;
} //end main()
