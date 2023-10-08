#include <stdio.h>

int main() {
    int a,greatest,i,j;
    int least = 10000000;
    int sum = 0;
    int ar[1000]={0};
    for (i = 0;;i++) {
        printf("Enter Start of range ");
        scanf("%d",&a);
        if (a>=0) {
            sum+=a;
            ar[i]=a;
        }
        else {
            break;
        }
    }
    printf("%d\n",i);
    j = i;
    int check = 0;
    while (j>=0) {
        check = ar[j];
        if (check>greatest) {
            greatest = check;
            j--;
        }
        else {
            j--;
        }
    }
    j = i-1;
    while (j>=0) {
        check = ar[j];
        if (check<least) {
            least = check;
            j--;
        }
        else {
            j--;
        }
    }
    j = i+1;
    printf("%d\n%d\n%d\n%d\n",sum,greatest,least,j);
    return 0;
}
