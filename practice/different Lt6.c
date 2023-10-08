#include <stdio.h>

int main() {
    int n,a;
    int i =0;
    int ar[1000]={0};
    printf("Enter a number that is 10 or above ");
    scanf("%d",&n);
    if(n<10) {
        printf("Invalid");
    }
    while (n>=10) {
        ar[i]=n%10;
        n=n/10;
        i++;
    }
    int j = 0;
    for (i=i-1;i>=0;i--) {
        if (ar[i]==ar[j]) {
            continue;
        }
        else {
            a++;
            break;
        }
        j++;
    }
    if (a != 0) {
        printf("Number is a palindrome");
    }
    else {
        printf("Number is not a plaindrome");
    }
    return 0;
}
