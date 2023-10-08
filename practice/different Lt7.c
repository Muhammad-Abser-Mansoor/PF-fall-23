#include <stdio.h>

int main() {
    int n,i,st;
    printf("Enter number ");
    scanf("%d",&n);
    while (i<=n) {
        if (i%3 == 0 || i == 0) {
            printf("%d\t%d\t%d\t%d\n",i,i,i,i);
            i++;
            st++;
        }
        if (st%2==1) {
            printf(" \t%d\t%d\t \n",i,i);
            i++;
            printf("%d\t\t\t%d\n",i,i);
        }
        else {
            printf("%d\t\t\t%d\n",i,i);
            i++;
            printf(" \t%d\t%d\t \n",i,i);
        }
        i++;
    }
    return 0;
}
