/**
 * Programmer: Muhammad Abser Mansoor
 * Desc: Sum of elements of an array
 * Date: 10/3/23
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 0;
    int el = 0;
    int sum = 0;   
    int array[9]={0};
    while (i<9) {
        printf("Enter element of array ");
        scanf("%d",&el);
        array[i]=el;
        i++;
    }
    i = 0;
    while (i<9) {
        sum += array[i];
        i++;
    }
    printf("Sum of all elements of array are %d",sum);
    return 0;
}
    
