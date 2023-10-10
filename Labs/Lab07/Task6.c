/* Programmer: Muhammad Abser mansoor
* Date: 10/10/2023
* Task: Find frequency of numbers in an array.
*/

#include <stdio.h>

int main() {
    int n,i,j,check;
    int ar[10000] = {0};
    printf("Enter size of array ");
    scanf("%d",&n);
    for (int k = 0;k<n;k++) {
        printf("Enter element ");
        scanf("%d",&i);
        ar[k] = i;
    }
    int already[10000]={0};
    for (int g = 0;g<n;g++) {
        int freq = 0;
        int df=0;
        check = ar[g];
        already[g]=check;
        for (int m=0;m<=g;m++) {
            if (check == already[m]) {
                df++;
            }
        }
        if (df <= 1) {
            j=0;
            while (j<n) {
                if (check==ar[j]) {
                    freq++;
                    j++;
                }
                else {
                    j++;
                }
            }
            printf("Frequency of %d is %d\n",ar[g],freq);
        }
        else {
            continue;
        }
    }
    return 0;
} //end main
