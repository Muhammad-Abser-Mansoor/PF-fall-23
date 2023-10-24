/* 
  * Programmer: Muhammad Abser Mansoor
  * Date: 24/10/2023
  * Desc: Do operations on an array
  */

#include <stdio.h>
#include <string.h>

 /* 
  * Programmer: Muhammad Abser Mansoor
  * Date: 24/10/2023
  * Desc: Find Max
  */
int Max(int *i,int size) {
    int max=0;
    for (int j = 0;j<size;j++) {
        if (max < i[j]) {
            max = i[j];
        }
    }
    return max;
}
 /* 
  * Programmer: Muhammad Abser Mansoor
  * Date: 24/10/2023
  * Desc: Find Minimum
  */
int Min(int *i,int size) {
    int min=10000000;
    for (int j = 0;j<size;j++) {
        if (min > i[j]) {
            min = i[j];
        }
    }
    return min;
}
/* 
  * Programmer: Muhammad Abser Mansoor
  * Date: 24/10/2023
  * Desc: Find Sum
  */
int Sum(int *i,int size) {
    int sum=0;
    for (int j = 0;j<size;j++) {
        sum+=i[j];
    }
    return sum;
}
void main() {
    int ar[1000];
    int n,j;
    printf("Enter size of array ");
    scanf("%d",&n);
    for (int i = 0;i<n;i++) {
        printf("Enter element %d ",i);
        scanf("%d",&j);
        ar[i] = j;
    }
    printf("Max is %d, Min is %d and Sum is %d",Max(ar,n),Min(ar,n),Sum(ar,n));
    return;
}
