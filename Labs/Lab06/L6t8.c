/**
 * Programmer: Muhammad Abser Mansoor
 * Desc: Reverse an array
 * Date: 10/3/23
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 0;
    int el = 0;
    int n = 0;
    printf("Enter size of array ");
    scanf("%d",&n);
    int array[100]={0};
    while (i<n) {
        printf("Enter element of array ");
        scanf("%d",&el);
        array[i]=el;
        i++;
    }
    i = n-1;
    printf("Reversed array is \n");
    while (i>=0) {
        el=array[i];
        printf(" %d ",el);
        i--;
    }
    return 0;
}
    
