#include <stdio.h>

int checkHorizontal(char arr[5][5]) {
    int great = 0;
    int a = 0;
    for (int i = 0;i<5;i++) {
        a = 0;
        for (int j = 0;j<5;j++) {
            if (arr[i][j] == 'S') {
                a++;
            }
        }
    printf("%d\t",a);
    if (a > great) {
        great = a;
        printf("%d\n",great);
        }
    }
    return great;
}
int checkVertical(char arr[5][5]) {
    int great = 0;
    int a = 0;
    for (int i = 0;i<5;i++) {
        a = 0;
        for (int j = 0;j<5;j++) {
            if (arr[j][i] == 'S') {
                a++;
            }
        }
    if (a > great) {
        great = a;
        printf("%d\n",great);
        }
    }
    return great;
}
int checkDiagonal(char arr[5][5]) {
    int great = 0;
    int a,b = 0;
    for (int i = 0;i<5;i++) {
        a = 0;
        b = 0;
        for (int k = 0,j=i;k<5-i;k++,j++) {
            if (arr[j][k] == 'S') {
                a++;
            }
        }
        for (int k = 0,j=i;k<=i;k++,j--) {
            if (arr[j][k] == 'S') {
                b++;
            }
        }
        printf("%d\t%d\n",a,b);
        if (a > b) {
            if (a > great) {
                great = a;
                printf("%d\n",great);
            }
        }
        else {
            if (b > great) {
                great = b;
                printf("%d\n",great);
            }
        }
    }
    return great;
}
int main() {
    char ar[5][5] = {{'S','D','D','S','D'},{'S','D','S','D','S'},{'D','S','D','S','S'},{'S','S','D','S','S'},{'D','D','S','D','D'}};
    int a,b,c;
    a=checkVertical(ar);
    b=checkHorizontal(ar);
    c=checkDiagonal(ar);
    if (a > b && a > c) {
        printf("%d",a);
    }
    else if (b > a && b > c) {
        printf("%d",b);
    }
    else if (c > a && c > b) {
        printf("%d",c);
    }
    return 0;
}
