/* Programmer: Muhammad Abser Mansoor
*  Date: 15/10/2023
*  Desc: Input an array of size n and a number and find a subarray using the original array whose elements add up to the number input.
*/
#include <stdio.h>
void Subarray(int *arr, int n, int s) {
    for (int i = 0; i < n; i++) {
        for (int j = i, sum = 0; j < n && sum < s; j++) {
            sum += arr[j]; 
            if (sum == s) { 
                printf("%d to %d", i, j); 
                return;
                }
        }
    }
    printf("No subarray");
    return;
}
int main() {
    int f,a,n,ar[100];
    printf("Enter a number ");
    scanf("%d",&a);
    printf("Enter size of array ");
    scanf("%d",&f);
    for (int i = 0;i < f;i++) {
        printf("Enter element of array ");
        scanf("%d",&n);
        ar[i] = n;
    }
    Subarray(ar,f,a);
    return 0;
} // end main
