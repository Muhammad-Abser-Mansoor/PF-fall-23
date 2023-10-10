/* Programmer: Muhammad Abser mansoor
* Date: 10/10/2023
* Task: Input number and find the sum of its digits.
*/

#include <stdio.h>

int main() {
    int n=0;
    int a=0;
    printf("Enter number ");
    scanf("%d",&n);
    for (int i = 0;n > 0;i++) {
        if (n < 100 && n >=10) {
            a += n%10;
            n=n/10;
            a += n%10;
            n=n/10;
        }
        else {
            a+= n%10;
            n=n/10;
        }
    }
    printf("%d",a);
    return 0;
} //end main()
