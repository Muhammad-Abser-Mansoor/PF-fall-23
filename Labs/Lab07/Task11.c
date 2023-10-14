/* Programmer: Muhammad Abser mansoor
* Date: 10/10/2023
* Task: Create a mtrix of max values from a number of 3 by 3 matrices inside an n by n grid.
*/

#include <stdio.h>
void Maxlocal (int n) { // This function creates an n by n grid which is then filled with 3 by 3 matrices and the the greatest value of each matrix is assigned to the maxlocal matrix
    int f,g,mli,mlj = 0; // Input variable and variable to isolate greatest value and 2 address variables for the Maxlocal matrix
    int matrix[n+2][n+2]; // 2D array initialised to take inputs in the form of 3x3 matrices.
    int Maxlocal[n-2][n-2]; // Maxlocal matrix
    for (int k = 0;k<=n;k+3) { // Rows of the grid
        for (int m = 0;m<=n;m+3) { // Columns of the grid
            for (int i = k;i<k+3;i++) { // Rows of 3x3 matrix
                for (int j = m;j<m+3;j++) { // columns of 3x3 matrix
                    printf("Enter element ");
                    scanf("%d",&f); // input for matrix
                    matrix[i][j] = f;
                }
            }
            for (int i = k;i<k+3;i++) { // Printing the current matrix
                for (int j = m;j<m+3;j++) {
                printf("%d, ",matrix[i][j]);
                }
            printf("\n"); // Moving to next row
            }
            g = 0;
            for (int i = k;i<k+3;i++) { // Finding the greatest value of the 3x3 matrix that was just input
                for (int j = m;j<m+3;j++) {
                    if (g < matrix[i][j]) {
                        g = matrix[i][j];
                    }
                }
            }
            Maxlocal[mli][mlj]=g; // Input the greatest value in Maxlocal
            printf("Maxlocal value is %d\n",Maxlocal[mli][mlj]); // Printing the values of Maxlocal for reference and debugging
            mlj++; // Moving to next column
            if (mlj == n-2) {
                mli++;
                mlj = 0;// Moving to next row
        }
        printf("\n");
    }
    for (int i = 0;i<mli;i++) { // Printing Maxlocal
        for (int j = 0;j<mlj;j++) {
            printf("%d, ",Maxlocal[i][j]);
        }
        printf("\n"); // Moving to next row
    }
    return;
}
int main() {
    int n = 0;
    printf("Enter size of n by n grid ");
    scanf("%d",&n);
    Maxlocal(n); // n taken and function called
    return 0;
} //end main
