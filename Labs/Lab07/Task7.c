/* Programmer: Muhammad Abser mansoor
* Date: 10/10/2023
* Task: Rearrange an array in ascending order.
*/

#include <stdio.h>
/* Date: 10/10/2023
* desc: Rearranges an array in ascending order.
* arg: Takes 
*/
int Rearrangement() {
    int ar[1000]={0};
    int n,s,a;
    printf("Enter size of array ");
    scanf("%d",&s);
    for (int i = 0;i<s;i++) {
        printf("Enter element ");
        scanf("%d",&n);
        ar[i] = n;
    }
    int check = 0;
    for (int i = 0;i<s;i++) {
        check = ar[i]
        for (int j = 0;j<s;j++) {
            if (check < ar[j]) {
                a++;
            }
            if (a==n-2) {
             ar[i] =    
            }
        }
    }
    return 0;
}//end main
