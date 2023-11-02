/*
 * Programmer: Muhammad Abser Mansoor
 * Desc: Use recursion to print the fibonacci sequence
 * Date: 31/10/23
 */
#include <stdio.h>

void fibonacci(int a, int b, int k, int n) {
    if (n) {
        printf("%d ");
        fibonacci(b, k, k+b, n-1);
    }
    return;
} // end fibonacci

int main() {
    int n;
    printf("Enter length of fibonacci: ");
    scanf("%d", &n);
    fibonacci(1, 0, 1, n);
    return 0;
} // end main
