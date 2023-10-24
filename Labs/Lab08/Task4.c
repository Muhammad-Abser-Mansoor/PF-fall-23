/* 
  * Programmer: Muhammad Abser Mansoor
  * Date: 24/10/2023
  * Desc: Verify input Password
  */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

 /* 
  * Programmer: Muhammad Abser Mansoor
  * Date: 24/10/2023
  * Desc: Verify password
  */
int Verify(char *x) {
    if (strlen(x) >= 8 && strcmp("Abserman2",x)==0) {
        return 1;
    }
    return 0;
}
int main() {
    char e[1000];
    printf("Enter password ");
    scanf ("%s",e);
    if (Verify(e)) {
        printf("Login Successful. Welcome!");
    }
    else {
        printf("Login failed. Incorrect password.");
    }
}
