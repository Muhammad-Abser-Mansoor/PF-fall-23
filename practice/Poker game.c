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
    int ar1[100],ar2[100];
    char t1[100],t2[100];
    char b;
    int a;
    for (int i = 0;i<5;i++) {
        printf("Enter card type as D/S/C/H");
        scanf(" %c",&b);
        if (b != 'D' || b != 'S' || b != 'C' || b != 'H') {
            printf("Invalid");
            return 0;
        }
        t1[i] = b;
        printf("Enter card number or K/Q/J/A as 11 through 14");
        scanf("%d",&a);
        if (a > 14 || a < 1) {
            printf("Invalid");
            return 0;
        }
        ar1[i] = a;
    }
    for (int i = 0;i<5;i++) {
        printf("Enter card type as D/S/C/H");
        scanf(" %c",&b);
        if (b != 'D' || b != 'S' || b != 'C' || b != 'H') {
            printf("Invalid");
            return 0;
        }
        t2[i] = b;
        printf("Enter card number or K/Q/J/A as 11 through 14");
        scanf("%d",&a);
        if (a > 14 || a < 1) {
            printf("Invalid");
            return 0;
        }
        ar2[i] = a;
    }
    if (fourofakind(t1, ar1) == true && fourofakind(t2, ar2) == false) {
        printf("player 1 wins");
    }
    else if (fourofakind(t2, ar2) == true && fourofakind(t1, ar1) == false)  {
        printf("Player 2 wins");
    }
    else if (twopair(t2, ar2) == true && twopair(t1, ar1) == false)  {
        printf("Player 2 wins");
    }
    else if (twopair(t1, ar1) == true && twopair(t2, ar2) == false) {
        printf("player 1 wins");
    }
    else if (Highcard(t1, ar1) == true && Highcard(t2, ar2) == false) {
        printf("player 1 wins");
    }
    else if (Highcard(t1, ar1) == false && Highcard(t2, ar2) == true) {
        printf("player 2 wins");
    }
    return 0;
