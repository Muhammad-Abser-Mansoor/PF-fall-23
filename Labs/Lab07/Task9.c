#include <stdio.h>

int main() {
    int n,x,y,m;
    printf("Enter Number of branches ");
    scanf("%d",&n);
    int ar[100][100];
    for (int i = 0;i<n;i++) {
        printf("Enter ID for branch %d",i+1);
        scanf("%d",&x);
        
        printf("Enter Number of mobile phones in branch ");
        scanf("%d",&m);
        for (int j = 0;j<m;j++) {
            printf("Enter Mobile ID for mobile %d",j+1);
            scanf("%d",&y);
            ar[i][j] = 
        }
    }

    return 0;
}
