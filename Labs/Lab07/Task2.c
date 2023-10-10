/* Programmer: Muhammad Abser mansoor
* Date: 10/10/2023
* Task: Create a code to divide 2 inputs without using divisor function.
*/

#include <stdio.h>

int main() {
    int ar[1000]={0};
    int n,a,d,check;
    int j,k = 0;
    printf("Enter size of array ");
    scanf("%d",&n);
    for (int i = 0;i<n;i++) {
        printf("Enter element of array ");
        scanf("%d",&a);
        ar[i]=a;
    }
    printf("How many positions to the right do you want to shift? " );
    scanf("%d",&d);
    for (int i = 0;i<n;i++) {
        if (i+d<n) {
            check=ar[j+d];
            printf("%d,",check);
            j++;
        }
        else {
            check=ar[k];
            printf("%d,",check);
            k++;
        }
    }
    return 0;
} //end main()
