/**
 * Programmer: Muhammad Abser Mansoor
 * Desc: Draw sticks between computer and user but computer always wins
 * Date: 10/3/23
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 21;
    int p = 0;
    while (n>0) {
        printf("How many sticks do you want? ");
        scanf("%d",&p);
        n-=p;
        if (n <= 0) {
            printf("you lose");
            break;
        }
        else {
            n = n-(rand()%4) + 1;
            if (n == 0) {
                n=n+4;
                continue;
            }
        else {
            continue;
        }
        }
    }
}
