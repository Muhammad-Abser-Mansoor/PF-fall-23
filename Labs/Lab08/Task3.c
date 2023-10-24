/* 
  * Programmer: Muhammad Abser Mansoor
  * Date: 24/10/2023
  * Desc: Find a specific character within a string
  */

#include <stdio.h>
#include <string.h>

 /* 
  * Programmer: Muhammad Abser Mansoor
  * Date: 24/10/2023
  * Desc: function for finding a specific character within an input string
  */
int Finder(char *x,char f) {
    int str = 0;
    char *l = strchr(x,f);
    while (l != NULL) {
        if (strchr(x,f)) {
            str++;
            x = strchr(x + 1,f); 
        }
        else {
            x = strchr(x+1,f);
        }
    }
    return str; 
}
int main() {
    char x[1000];
    char e;
    printf("enter word ");
    scanf("%s",&x);
    printf("enter character needed ");
    scanf(" %c",&e);
    printf("Amount of characters in string",Finder(x,e));
    return 0;
}
