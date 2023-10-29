#include <stdio.h>
/*
 * Desc.: Function takes the arrays of stored pairs and compares them with the current pair that has been found. It returns true if no match is found.
 */
int dupcheck(int y[],int t[],int v,int cur1,int cur2) {
    for (int i = 0;i<v;i++) {
        if (y[i] == cur1 && t[i] == cur2 || y[i] == cur2 && t[i] == cur1) {
            return 0;
        }
    }
    return 1;
}
/* 
  * Programmer: Muhammad Abser Mansoor
  * Date: 24/10/2023
  * Desc: Create a database for the performance of batsmen
  */
int main() {
    int ar[1000];
    int y[100];
    int t[100];
    int a,b,n,v = 0;
    printf("Enter size of array ");
    scanf("%d",&n);
    printf("Enter a number ");
    scanf("%d",&a);
    for (int i = 0;i<n;i++) {
        printf("Enter element of array ");
        scanf("%d",&b);
        ar[i] = b;
    }
    for (int i = 0;i<n;i++) {
        for (int j = 0;j<n;j++) {
            if (ar[i] + ar[j] == a) {
                int m = ar[i];
                int k = ar[j];
                if (dupcheck(y,t,v,m,k) != 0) {
                    y[v] = m;
                    t[v] = k;
                    printf("(%d, %d), ",y[v],t[v]);
                    v++;
                }
            }
        }
    }
    return 0;
}
