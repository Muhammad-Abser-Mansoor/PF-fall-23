/*Programmer: Muhammad Abser Mansoor
* Date: 13/10/2023
* Desc.: Create a database for the bills of mobile phones in multiple branches. Print out the Total bill for all branches, Total bill for each branch, Branch ID where maximum bill arrived, Branch and Mobile Phone IDs where bill is highest of all mobile phones.
*/

#include <stdio.h>

int main() {
    int n,x,y,m,j,g,c,sumi,sumj,gsum,gaj,gai;
    sumi = 0;
    printf("Enter Number of branches ");
    scanf("%d",&n);
    int ar[100][100];
    for (int i = 0;i<n;i++) {
    	sumj = 0;
        printf("Enter ID for branch %d ",i+1);
        scanf("%d",&x);
        j = 0;
        ar[i][j] = x;
        printf("Enter Number of mobile phones in branch ");
        scanf("%d",&m);
        for (j = 1;j<=m;j++) {
            printf("Enter Mobile ID for mobile %d ",j);
            scanf("%d",&y);
            ar[i][j-1] = y;
            printf("Enter the bill for the mobile ");
            scanf("%d",&c);
            sumj += c;
            if (g < c) {
            	g = c;
            	gaj=j-1;
            	gai=i;
			}
			if (i == n-1 && j == m) {
				printf("\nThe highest mobile bill arrived for mobile %d with ID %d in branch %d with ID %d is %d",gaj,ar[gai][gaj],gai+1,ar[gai][0],g);
			}
        }
        	if (gsum<sumj) {
        		gsum = sumj;
			}
        sumi+=sumj;
        printf("\nTotal bill for branch %d with ID %d is %d\n",i+1,ar[i][0],sumj);
        	if (i == n-1) {
        		printf("The highest total bill arrived in Branch %d with ID %d",i+1,ar[i][0]);
			}
    }
    printf("\nTotal bill for all branches is %d",sumi);
    return 0;
}
