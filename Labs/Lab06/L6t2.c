/**
 * Programmer: Muhammad Abser Mansoor
 * Desc: Sum of Fibonacci numbers divisible by 3,5 and 7
 * Date: 10/3/23
 */
#include <stdio.h>

int main() {
    int i = 1;
    int j = 1;
    int sum = 0;
    printf("%d %d ",i,j);
    int ans = 0;
    for(int n = 0;ans < 6765;n++) {
            ans = i + j;
            i = j;
            j = ans;
            printf(" %d ",ans);
            if (!(ans%3) || !(ans%5) || !(ans%7)) {
                sum += ans; }
            }
    printf("\nSum of numbers is %d",sum);        
    return 0;
}
