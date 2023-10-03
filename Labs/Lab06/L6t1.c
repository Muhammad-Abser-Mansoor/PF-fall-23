/**
 * Programmer: Muhammad Abser Mansoor
 * Desc: Find Perfect number
 * Date: 10/3/23
 */
#include <stdio.h>

int main() {
    int n = 0;
    int i = 2;
    int total;
    printf("Enter number");
    scanf("%d", &n);
    for (;;) {
        int divi = n/i;
        if((n%i == 0) && (i<= n)){
                 total = divi + total;
                 printf("%d ", divi);
                 i++; }
        else if (i > n) {
             break;
        }
        else {
            i++;
        }
    }
        if (total == n) {
                  printf("It is a perfect number"); }
        else {
             printf("It is not perfect"); }
        return 0; }
