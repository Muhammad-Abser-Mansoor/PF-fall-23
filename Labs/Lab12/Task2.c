/* Programmer: Muhammad Abser mansoor
 * Date: 10/10/2023
 * Task: Reading a CSV file and outputting in a specified format
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    FILE *f = fopen("test.docx","rb");
    FILE *f1 = fopen("testt.docx","rb");
    fseek(f,0L,SEEK_END);
    int s1 = ftell(f);
    rewind(f);
    fseek(f1,0L,SEEK_END);
    int s2 = ftell(f1);
    rewind(f1); // finding sizes of files
    char *x = (char *)malloc(sizeof(char)*s1); // allocating appropriate memory size
    char *y = (char *)malloc(sizeof(char)*s2);
    // read files
    fread(x,1,s1,f);
    fread(y,1,s2,f1);
    if (strcmp(x,y)) {
        printf("not same");
    }
    else {
        printf("same");
    }
}
