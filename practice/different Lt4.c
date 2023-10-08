#include <stdio.h>
#include <math.h>

int main() {
    int up,lp,root;
    double check = 0;
    printf("Enter upper limit ");
    scanf("%d",&up);
    printf("Enter lower limit ");
    scanf("%d",&lp);
    for (int i = lp;i <= up;i++) {
        root = sqrt(i);
        check = sqrt(i);
        if (root/check != 1) {
            continue;
        }
        else {
            printf("%d\n",i);
        }
    }
    return 0;
}
