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
        printf("%d ",arr[j]);
        j++;
    }
    printf("\n");
    int check = 0;
    j-=1;
    while (j>=0) {
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
