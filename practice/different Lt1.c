#include <stdio.h>

int main() {
    int a,b;
    printf("Enter Start of range ");
    scanf("%d",&a);
    printf("Enter End of range ");
    scanf("%d",&b);
    int j = 0;
    int arr[10000]={0};
    for (int i = a;i<=b;i++) {
        arr[j]=i;
        j++;
    }
    int check = 0;
    while (j-1>=0) {
        check = arr[j]%2;
        if (check == 0) {
            printf("%d ",arr[j]);
            j--;
        }
        else {
            j--;
        }
    }
    return 0;
}
