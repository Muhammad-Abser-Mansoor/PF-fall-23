#include <stdio.h>
 /* Desc: Sort age in ascending order
  */
void ascendage(int ar[][3],int n) {
    int temp,k = 0;
    for (int i = 0;i<n;i++) {
        temp = ar[i][0];
        for (int j = 0;j<n;j++) {
            if (ar[i][0] > ar[j][0]) {
                k++;
            }            
        }
        ar[k][0] = temp;
    }
    return;
}
 /* Desc: Sort price in descending order
  */
void descendprice(int ar[][3],int n) {
    int temp,k = 0;
    for (int j = 0,l=1;j<n;j++) {
    temp = ar[j][1];
        for (int m = 0;m<n;m++) {
            if (ar[j][1] < ar[m][1]) {
                k++;
            }            
        }
        ar[k][1] = temp;
    }
    return;
}
 /* 
  * Programmer: Muhammad Abser Mansoor
  * Date: 24/10/2023
  * Desc: Sort a database containing info about shirts
  */
int main() {
    int ar[100][100];
    int a,b,n,v = 0;
    int price[100];
    int age[100];
    printf("How many shirts does the store have? ");
    scanf("%d",&n);
    for (int i = 0,j = 1;i<n;i++) {
        printf("Enter average customer age for shirt %d ",i+1);
        scanf("%d",&ar[i][0]);
        printf("Enter the price for shirt %d ",i+1);
        scanf("%d",&ar[i][j]);
    }
    descendprice(ar,n);
    printf("\n\nIn descending price order:\n");
    printf("Age\tPrice\n");
    for (int i = 0;i<n;i++) {
        printf("%d\t%d\n",ar[i][0],ar[i][1]);
    }
    ascendage(ar,n);
    printf("\n\nIn ascending age order:\n");
    for (int i = 0;i<n;i++) {
        printf("%d\t%d\n",ar[i][0],ar[i][1]);
    }
    return 0;
}
