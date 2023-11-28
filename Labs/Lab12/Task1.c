/* Programmer: Muhammad Abser mansoor
 * Date: 10/10/2023
 * Task: Reading a CSV file and outputting in a specified format
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    FILE *f = fopen("ss.csv","r");
    while (!feof(f)) {
        char buf[200];
        fgets(buf,100,f);
        char s[2] = ",";
        char *x = strtok(buf,s);
        while (x != NULL) {
            x[strcspn(x, "\n")] = 0;
            printf("%s\t | ",x);
            x = strtok(NULL,s);
        }
        printf("\n");
    }
    fclose(f);
}
