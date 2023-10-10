/* Programmer: Muhammad Abser mansoor
* Date: 10/10/2023
* Task: Rearrange an array in ascending order.
*/

#include <stdio.h>

int main() {
    int ar[1000]={0};
    int n,s,a;
    printf("Enter size of array ");
    scanf("%d",&s);
    for (int i = 0;i<s;i++) {
        printf("Enter element ");
        scanf("%d",&n);
        ar[i] = n;
    }
    int j = 0;
    int check = 0;
    for (int i = 0;i<s;i++) {
        check = ar[i];
        a=0;
        j=0;
        while (j<s) {
                if (check < ar[j]) {
                    a++;
                    j++;
                }
                else {
                    j++;
                }
            }
        printf("%d ",ar[s-1-a]);
        }
    return 0;
}
