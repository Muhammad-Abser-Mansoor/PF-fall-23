/**
 * Programmer: Muhammad Abser Mansoor
 * Desc: Finding LCM and GCD
 * Date: 10/3/23
 */
#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int l = 0;
    int gcd = 0;
    printf("Enter number ");
    scanf("%d", &a);
    printf("Enter number ");
    scanf("%d", &b);
   for(int i = 2; i<=a && i<=b;i++) {
        if ((a%i==0) && (b%i==0)) {
                     gcd = i;
                     printf(("GCD is %d"), gcd);
                     }
             }
            l = (a*b)/gcd;
            printf("\nLCM is %d", l);
        return 0;
        }
