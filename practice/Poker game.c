#include <stdio.h>
#include <stdbool.h>
bool fourofakind (char t, int ar) {
    int a=0;
    int b = 0;
    bool num,typ;
    for (int i = 0,a=0;i<5;i++) {
        for (int j = 0;j<5;j++) {
                if (ar[j] == ar[i]) {
                a++;
            }
        }
        if (a == 4) {
            b++;
        }
    }
    if (b < 4) {
        num = false;
    }
    for (int i = 0,a=0;i<5;i++) {
        for (int j = 0;j<5;j++) {
                if (t[j] == t[i]) {
                a++;
            }
        }
        if (a > 1) {
            b++;
        }
    }
    if (b > 1) {
        typ = false;
    }
    if (typ == true && num == true) {
        return true
    }
    else {
        return false;
    }
}
bool twopair (char t, int ar) {
    int b,a=0;
    for (int i = 0,a=0;i<5;i++) {
        for (int j = 0;j<5;j++) {
                if (ar[j] == ar[i]) {
                a++;
            }
        }
        if (a == 2) {
            b++;
        }
    }
    if (b < 2) {
        return false;
    }
    else {
        return true;
    }
}
bool Highcard (char t, int ar) {
    int b,a=0;
    bool ace = false;
    for (int i = 0,a=0;i<5;i++) {
        for (int j = 0;j<5;j++) {
                if (ar[j] == 14) {
                ace = true;
                if (ar[j] == ar[i]) {
                    return false
                }
                }
        }
    }
    if (ace == true) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int ar[100];
    char t[100];
    char b;
    int a;
    for (int k = 0;k<2;k++) {
    for (int i = 0;i<5;i++) {
        printf("Enter card type as D/S/C/H");
        scanf(" %c",&b);
        if (b != 'D' || b != 'S' || b != 'C' || b != 'H') {
            printf("Invalid");
            return 0;
        }
        t[i] = b;
        printf("Enter card number or K/Q/J/A as 11 through 14");
        scanf("%d",&a);
        if (a > 14 || a < 1) {
            printf("Invalid");
            return 0;
        }
        ar[i] = a;
    }
    }
    
