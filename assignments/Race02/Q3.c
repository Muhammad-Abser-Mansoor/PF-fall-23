/* Programmer: Abser Mansoor
 * 

#include <stdio.h>
#include <string.h>
int main() {
    int ar[5][4] = {{1,300,0,NULL},{1,320,1,310},{0,NULL,1,280},{1,380,0,NULL},{1,375,1,400}};
    char *a[] = {"Day","Morning","Price","Evening","Price"};
    char *b[] = {"Monday","Tuesday","Wednesday","Thursday","Friday"};
    char f;
    char t;
    char x;
    printf("Do you have a preference of time? E for evening or M for morning or N for no preference ");
    scanf(" %c",&x);
    printf("Do you have a preference of Day? m/t/w/T/f or n for no preference ");
    scanf(" %c",&f);
    for (int i = 0;i<5;i++) {
        printf("%s\t|",a[i]);
    }
    printf("\n");
    for (int k = 0;k<5;k++) {
        printf("%s\t",b[k]);
        for (int j = 0;j<4;j++) {
            printf("%d\t",ar[k][j]);
        }
        printf("\n");
    }
    int low = 100000;
    if (x == 'E') {
        switch (f) {
            case 'n':
            for (int i = 0;i<5;i++) {
                if (ar[i][2] == 1) {
                    if (low > ar[i][3]) {
                        low = ar[i][3];
                    }
                }
            }
            for (int i = 0;i<5;i++) {
                if (ar[i][2] == 1 && ar[i][3] == low) {
                    printf("A flight is available on %s with price of %d",b[i],ar[i][3]);
            }
        }
        break;
        case 'm':
        if (ar[0][2] == 1) {
            printf("A flight is available on %s with price of %d",b[0],ar[0][3]);
        }
        else {
            printf("There are no flights available");
        }
        break;
        case 't':
        if (ar[1][2] == 1) {
            printf("A flight is available on %s with price of %d",b[1],ar[1][3]);
        }
        else {
            printf("There are no flights available");
        }
        break;
        case 'w':
        if (ar[2][2] == 1) {
            printf("A flight is available on %s with price of %d",b[2],ar[2][3]);
        }
        else {
            printf("There are no flights available");
        }
        break;
        case 'T':
        if (ar[3][2] == 1) {
            printf("A flight is available on %s with price of %d",b[3],ar[3][3]);
        }
        else {
            printf("There are no flights available");
        }
        break;
        case 'f':
        if (ar[4][2] == 1) {
            printf("A flight is available on %s with price of %d",b[4],ar[4][3]);
        }
        else {
            printf("There are no flights available");
        }
        break;
    }
    }
    else if (x == 'M') {
        switch (f) {
            case 'n':
            for (int i = 0;i<5;i++) {
                if (ar[i][0] == 1) {
                    if (low > ar[i][1]) {
                        low = ar[i][1];
                    }
                }
            }
            for (int i = 0;i<5;i++) {
                if (ar[i][0] == 1 && ar[i][1] == low) {
                    printf("A flight is available on %s with price of %d",b[i],ar[i][1]);
            }
        }
        break;
        case 'm':
        if (ar[0][0] == 1) {
            printf("A flight is available on %s with price of %d",b[0],ar[0][1]);
        }
        else {
            printf("There are no flights available");
        }
        break;
        case 't':
        if (ar[1][0] == 1) {
            printf("A flight is available on %s with price of %d",b[1],ar[1][1]);
        }
        else {
            printf("There are no flights available");
        }
        break;
        case 'w':
        if (ar[2][0] == 1) {
            printf("A flight is available on %s with price of %d",b[2],ar[2][1]);
        }
        else {
            printf("There are no flights available");
        }
        break;
        case 'T':
        if (ar[3][0] == 1) {
            printf("A flight is available on %s with price of %d",b[3],ar[3][1]);
        }
        else {
            printf("There are no flights available");
        }
        case 'f':
        if (ar[4][0] == 1) {
            printf("A flight is available on %s with price of %d",b[4],ar[4][1]);
        }
        else {
            printf("There are no flights available");
        }
        break;
    }
    }
    else {
        switch (f) {
            case 'n':
            for (int i = 0;i<5;i++) {
                if (ar[i][0] == 1) {
                    if (low > ar[i][1]) {
                        low = ar[i][1];
                    }
                }
                if (ar[i][2] == 1) {
                    if (low > ar[i][3]) {
                        low = ar[i][3];
                    }
                }
            }
            for (int i = 0;i<5;i++) {
                if ((ar[i][0] == 1 && ar[i][1] == low) || (ar[i][2] == 1 && ar[i][3] == low)) {
                    printf("A flight is available on %s with price of %d",b[i],ar[i][1]);
            }
        }
        break;
        case 'm':
        if (ar[0][0] == 1 && ar[0][1] < low) {
            low = ar[0][1];
        }
        if (ar[0][2] == 1 && ar[0][3] < low) {
            low = ar[0][3];
        }
        if (low == ar[0][3]) {
            printf("A flight is available on %s in the evening with price of %d",b[0],low);
        }
        else if (low == ar[0][1]) {
            printf("A flight is available on %s in the morning with price of %d",b[0],low);
        }
        break;
        case 't':
        if (ar[1][0] == 1 && ar[1][1] < low) {
            low = ar[1][1];
        }
        if (ar[1][2] == 1 && ar[1][3] < low) {
            low = ar[1][3];
        }
        if (low == ar[1][3]) {
            printf("A flight is available on %s in the evening with price of %d",b[1],low);
        }
        else if (low == ar[1][1]) {
            printf("A flight is available on %s in the morning with price of %d",b[1],low);
        }
        break;
        case 'w':
        if (ar[2][0] == 1 && ar[2][1] < low) {
            low = ar[2][1];
        }
        if (ar[2][2] == 1 && ar[2][3] < low) {
            low = ar[2][3];
        }
        if (low == ar[2][3]) {
            printf("A flight is available on %s in the evening with price of %d",b[2],low);
        }
        else if (low == ar[2][1]) {
            printf("A flight is available on %s in the morning with price of %d",b[2],low);
        }
        break;
        case 'T':
        if (ar[3][0] == 1 && ar[3][1] < low) {
            low = ar[3][1];
        }
        if (ar[3][2] == 1 && ar[3][3] < low) {
            low = ar[3][3];
        }
        if (low == ar[3][3]) {
            printf("A flight is available on %s in the evening with price of %d",b[3],low);
        }
        else if (low == ar[3][1]) {
            printf("A flight is available on %s in the morning with price of %d",b[3],low);
        }
        break;
        case 'f':
        if (ar[4][0] == 1 && ar[4][1] < low) {
            low = ar[4][1];
        }
        if (ar[4][2] == 1 && ar[4][3] < low) {
            low = ar[4][3];
        }
        if (low == ar[4][3]) {
            printf("A flight is available on %s in the evening with price of %d",b[4],low);
        }
        else if (low == ar[4][1]) {
            printf("A flight is available on %s in the morning with price of %d",b[4],low);
        }
        break;
    }
    }
    return 0;
}
