/* Programmer: Muhammad Abser mansoor
* Date: 10/10/2023
* Task: Create a code to divide 2 inputs without using divisor function.
*/

#include <stdio.h>

int main() {
    int n1,n2,i;
    printf("Enter number ");
    scanf("%d",&n1);
    printf("Enter number ");
    scanf("%d",&n2);
    if (n1 < n2) {
        for (i = 0;n2 > 0;i++) {
            n2 = n2-n1;
        }
    }
    else {
        for (i = 0;n1 > 0;i++) {
            n1 = n1-n2;
        }
    }
    printf("%d",i);
    return 0;
} //end main()
