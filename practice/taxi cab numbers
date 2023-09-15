// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>

int main() {
    int i,j,k,m,n,num;// Variable declaration
    m = 0;
    k = 0;
    i = 1;
    printf("Calculate Taxi cab numbers until ");
    scanf("%d", &n); // input limit(n)
     int seq[n*n];  // Array holding all numbers that are sums of cubes of j and i
    while (i<=n) { // finding all numbers that that are sums of cubes of j and i until n and storing in Array
        j = 1;
        while (j<=n) {
            num = i*i*i + j*j*j;
            seq[k] = num;
            j++;
            k++;
        }
        i++;
    }
    i = 1;k = 0;
    while (i<=n) { // Comparing addresses in array to find 2 of the same value
        j = 0;
        seq[j] = m;
        while (k<n) {
            if (k == j) { // Ignoring same addresses
                k++;
            }
            else if (seq[k] == m) {
                printf("%d",m); // Finding and printing duplicate values
                k++; }
                else {
                   k++; 
                }
            }
            j++;
            i++;
        }

    return 0;
}
