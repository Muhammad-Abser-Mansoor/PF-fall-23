#include <stdio.h>
#include <string.h>
/* Programmer: Abser Mansoor
 * Date: 28/10/2023
 * Desc.: Solve the maze
 */
void main() {
    char ar[5][5] = {{'s','o','o','w','w'},{'o','w','o','w','w'},{'w','o','o','w','o'},{'w','w','o','w','o'},{'w','w','o','e','w'}};
    printf("(0, 0)\t");
    int positioni,positionj=0;
    for (int i = 0;i<5;) {
        for (int j = 0;j<5;) {
            if (ar[i+1][j] == 'o') {
                positioni++;
                printf("(%d, %d)\t",positioni,positionj);
            }
            else if (ar[i][j+1] == 'o') {
                positionj++;
                printf("(%d, %d)\t",positioni,positionj);
            }
            else if (ar[i-1][j] == 'o') {
                positioni--;
                printf("(%d, %d)\t",positioni,positionj);
                }
            else if (ar[i][j-1] == 'o') {
                positionj--;
                printf("(%d, %d)\t",positioni,positionj);
                }
            if (ar[i+1][j] == 'e') {
                positioni++;
                printf("(%d, %d)\t",positioni,positionj);
                return;
                }
            if (ar[i][j+1] == 'e') {
                positionj++;
                printf("(%d, %d)\t",positioni,positionj);
                return;
                }        
            }    
        }
    }
