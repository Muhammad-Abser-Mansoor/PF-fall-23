#include <stdio.h>

int main() {
    int n = 0;
    int a =0;
    int i =0;
    int ar[1000]={0};
    printf("Enter a number that is 10 or above ");
    scanf("%d",&n);
    if(n<10) {
        printf("Invalid");
    }
    while (n>=10) {
        if (n>=10 && n<100) {
            ar[i] = n%10;
            printf("%d ",ar[i]);
            i++;
            n=n/10;
            ar[i] = n%10;
            printf("%d ",ar[i]);
            n=n/10;
        }
            else {
            ar[i]=n%10;
            printf("%d ",ar[i]);
            n=n/10;
            i++;
        }
    }
    printf("\n%d",i);
    int j = 0;
    int k = i;
    while (k>=0) {
        printf("\n%d %d",k,j);
        if (ar[k]==ar[j]) {
            printf("\n%d %d\n",ar[k],ar[j]);
            j++;
            k=k-1;
        }
        else {
            a++;
            break;
        }
    }
    if (a == 0) {
        printf("Number is a palindrome");
    }
    else {
        printf("\nNumber is not a plaindrome");
    }
    return 0;
}
