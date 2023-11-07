#include <stdio.h>
/* Programmer: Abser Mansoor
 * Date: 28/10/2023
 * Desc.: Find the persistence of continous numbers until EOF is entered
 */
int main() {
    int n;
    int orig;
    int a =0;
    char x;
    for (;;) {
        printf("Enter n for which persistence will be found ");
        scanf("%d",&n);
        orig = n;
        while (n>9) {
            int num = 1;
            for (int j = 0;n>9;n = n/10) {
            num = num*n%10;
        }
        n = num;
        a++;
        }
        printf("persistence of %d is %d\n",orig,a);
        printf("Is that all? y/n ");
        scanf(" %c",&x);
        if (x == 'y') {
            return;
        }
    }
}
