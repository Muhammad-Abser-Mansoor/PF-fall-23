#include <stdio.h>

int main() {
    int a,b,sum1,sum2;
    printf("Enter a number ");
    scanf("%d",&a);
    printf("Enter a number ");
    scanf("%d",&b);
    for (int i = 1;i<a;i++) {
        if (a%i==0) {
            sum1 += i;
        }
    }
    for (int i = 1;i<b;i++) {
        if (b%i==0) {
            sum2 += i;
        }
    }
    if (sum1==b && sum2==a) {
        printf("Numbers are mutually perfect");
    }
    else {
        printf("Numbers are not mutually perfect");
    }
    return 0;
}
