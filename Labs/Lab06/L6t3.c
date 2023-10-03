#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int g = 0;
    int l = 0;
    int gcd = 0;
    printf("Enter number ");
    scanf("%d", &a);
    printf("Enter number ");
    scanf("%d", &b);
    if (a > b) {
          g = b; 
    }
    else {
         g = a; 
    }
    
    while (g>0); {
        if ((a%g==0) && (b%g==0)) {
             gcd = g;
             printf(("GCD is %d"), gcd);
             break;
         }
       g--; 
    }
    l = (a*b)/gcd;
    printf("\nLCM is %d", gcd);
    return 0;
}
