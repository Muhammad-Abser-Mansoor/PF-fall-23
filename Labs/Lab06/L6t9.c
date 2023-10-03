/**
 * Programmer: Muhammad Abser Mansoor
 * Desc: Find greatest and least value in array
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
    int check = 0;
    int great = 0;
    i = n-1;
    int j = 0;
    el = 0;
    while (i>=0) {
        el = array[i];
        while (j<n) {
            check = array[j];
            el = el - check;
            if (el>=0) {
                great++;
                j++;
                el = array[i];
            }
            else {
                j++;
                el = array[i];
            }
        }
        if (great == n) {
            printf("Greatest number is %d\n",el);
            break;
        }
        great = 0;
        j=0;
        i--;
    }
    i=n-1;
    int least = 0;
    while (i>=0) {
        el = array[i];
        while (j<n) {
            check = array[j];
            el = el - check;
            if (el<0) {
                least++;
                j++;
                el=array[i];
            }
            else {
                j++;
                el=array[i];
            }
        }
        if (least == n-1) {
            printf("Least number is %d",el);
            break;
        }
        least = 0;
        j=0;
        i--;
    }
    return 0;
}
    
