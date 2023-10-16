#include <stdio.h>

int main() {
   int n,prev,ar[100][100];
   prev = 0;
   int a = 1;
   printf("Enter dimensions for square matrix ");
   scanf("%d",&n);
   for (int i = 0;i<n;i++) {
       for (int j = 0;j<n;j++) {
           if (j == 0 && i == 0) {
               ar[i][j] = 1;
           }
           else {
                ar[i][j] = a+prev;
                a = ar[i][j];
                if (j == 0) {
                    prev = ar[i-1][n-1];
                }
                else {
                prev = ar[i][j-1]; }
           }
           printf("%d ",ar[i][j]);
       }
       printf("\n");
   }
   return 0;
}
