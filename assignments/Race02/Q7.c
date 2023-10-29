#include <stdio.h>
/*Desc.: Sorts array as ascending order in age*/
void ascendage(int ar[][2], int n) {
    int temp;
    for (int j = 0; j < n; j++) {
        int k = 0; 
        temp = ar[j][1];
        for (int m = 0; m < n; m++) {
            if (ar[j][1] > ar[m][1]) {
                k++;
            }
        }
        ar[j][1] = ar[k][1];
        ar[k][1] = temp;
    }
}
/*Desc.: Sorts array as descending order in price*/
void descendprice(int ar[][2], int n) {
    int temp;
    for (int j = 0; j < n; j++) {
        int k = 0; 
        temp = ar[j][1];
        for (int m = 0; m < n; m++) {
            if (ar[j][1] < ar[m][1]) {
                k++;
            }
        }
        ar[j][1] = ar[k][1];
        ar[k][1] = temp;
    }
}
/*Programmer: Abser Mansoor
 *Date:29/10/2023
 *Desc.: Modify a database of multiple shirts for different ages with different prices
 */
int main() {
    int ar[100][2];
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
