#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

// Checking columns and rows to see if any column or row collinear to the coordinates has a number equal to the inputted number
int Checkrowscolumns(int ar[][9],int randposr,int randposc,int num,int length) {
    for (int k = 0;k<length;k++) { 
        if (num == ar[randposr][k] || num == ar[k][randposc]) {
           return 0; 
        }
    }
    return 1;
}


int Checksubblock(int ar[][9],int randposr,int randposc,int num,int sr,int sc) {
    int srow = sr * (randposr / sr);
    int scolumn = sc * (randposc / sc);
    for (int k = srow;k<srow + sr;k++) { // Now check the 3x3 subblock that the address belongs to and find if any equal value exists
        for (int j = scolumn;j<scolumn + sc;j++) {
            if (num == ar[k][j]) {
                return 0;
            }
        }
    }
    return 1;
}


void CreatematrixMD() {
    int ar[9][9] = {0}; // Creating a Sudoku Matrix (Medium Difficullty)
    int clue = 0;
    int subblockrows = 3;
    int subblockcolumns = 3;
    int num = 0;
    srand(time(NULL));
    for (int i = 0;clue < 22;i++) { // Loop for inserting 22 clues within the empty matrix
        
        int randposr = (rand() % (9));

        int randposc = (rand() % (9)); // random numbers chosen to randomly select any block and insert a clue
        
        if (ar[randposr][randposc] == 0) { // Checks if there is no clue present

            num = (rand() % (9)) + 1; // Inputs a random number between 1 and 9 into num variable
           
            if (Checkrowscolumns(ar,randposr,randposc,num,9) == 1 && Checksubblock(ar,randposr,randposc,num,subblockrows,subblockcolumns) == 1) {
                
                ar[randposr][randposc] = num;
                
                clue++;
            }
        }
    }
    for (int i = 0;i<9;i++) { // Printing the initial matrix
        for (int j = 0;j<9;j++) {
            printf("%d  ",ar[i][j]);
        }
        printf("\n");
    }
}

void CreatematrixED() {
    int ar[6][6] = {0}; // Creating a Sudoku Matrix (Easy Difficullty)
    int clue = 0;
    int subblockrows = 2;
    int subblockcolumns = 3;
    int num = 0;
    srand(time(NULL));
    for (int i = 0;clue < 14;i++) { // Loop for inserting 12 clues within the empty matrix
        
        int randposr = (rand() % (6));

        int randposc = (rand() % (6)); // random numbers chosen to randomly select any block and insert a clue
        
        if (ar[randposr][randposc] == 0) { // Checks if there is no clue present

            num = (rand() % (6)) + 1; // Inputs a random number between 1 and 9 into num variable
           
            if (Checkrowscolumns(ar,randposr,randposc,num,6) == 1 && Checksubblock(ar,randposr,randposc,num,subblockrows,subblockcolumns) == 1) {
                
                ar[randposr][randposc] = num;
                
                clue++;
            }
        }
    }
    for (int i = 0;i<9;i++) { // Printing the initial matrix
        for (int j = 0;j<9;j++) {
            printf("%d  ",ar[i][j]);
        }
        printf("\n");
    }
}

void CreatematrixHD() {
    int ar[12][12] = {0}; // Creating a Sudoku Matrix (Easy Difficullty)
    int clue = 0;
    int subblockrows = 3;
    int subblockcolumns = 4;
    int num = 0;
    srand(time(NULL));
    for (int i = 0;clue < 37;i++) { // Loop for inserting 12 clues within the empty matrix
        
        int randposr = (rand() % (12));

        int randposc = (rand() % (12)); // random numbers chosen to randomly select any block and insert a clue
        
        if (ar[randposr][randposc] == 0) { // Checks if there is no clue present

            num = (rand() % (12)) + 1; // Inputs a random number between 1 and 9 into num variable
           
            if (Checkrowscolumns(ar,randposr,randposc,num,12) == 1 && Checksubblock(ar,randposr,randposc,num,subblockrows,subblockcolumns) == 1) {
                
                ar[randposr][randposc] = num;
                
                clue++;
            }
        }
    }
    for (int i = 0;i<12;i++) { // Printing the initial matrix
        for (int j = 0;j<12;j++) {
            if (ar[i][j] > 10) {
                printf("%c  ",ar[i][j] + 55);
            }
            else {
                printf("%d  ",ar[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    CreatematrixED();
    printf("\n");
    CreatematrixMD();
    printf("\n");
    CreatematrixHD();
    return 1;
}
