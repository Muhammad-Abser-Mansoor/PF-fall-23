 /* 
  * Programmer: Muhammad Abser Mansoor
  * Date: 24/10/2023
  * Desc: Create a database for the performance of batsmen
  */
#include <stdio.h>

int main() {
    int ar[100][100];
    int a,b,c;
    int avg,max,fif,hun,sum=0;
    printf("Enter total number of batsmen ");
    scanf("%d",&a);
    for (int i = 0;i<a;i++) {
        avg,max,fif,hun,sum=0;
        printf("Enter number of batsman %d ",i+1);
        scanf("%d",&b);
        ar[i][0] = b;
        printf("Enter total number of innings for batsman %d ",i+1);
        scanf("%d",&c);
        for (int j = 1;j<=c;j++) {
            printf("Enter runs in inning %d ",j);
            scanf("%d",&ar[i][j]);
            if (max<ar[i][j]) {
                max = ar[i][j];
            }
            if (ar[i][j] >= 50 && ar[i][j] < 100) {
                fif++;
            }
            if (ar[i][j] >= 100) {
                hun++;
            }
            sum+=ar[i][j];
        }
        avg = sum/c;
        printf("Statistics of Batsmen with id %d:\nHighest score in a single inning:%d\nNumber of fifties:%d\nNumber of hundreds:%d\nAverage runs in innings:%d\nTotal runs scored:%d\n",ar[i][0],max,fif,hun,avg,sum);
    } 
    return 0;
}
