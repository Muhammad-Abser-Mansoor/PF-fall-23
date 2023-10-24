/* 
  * Programmer: Muhammad Abser Mansoor
  * Date: 24/10/2023
  * Desc: Decide Car usage depending on day of the week
  */

#include <stdio.h>
#include <string.h>

 /* 
  * Programmer: Muhammad Abser Mansoor
  * Date: 24/10/2023
  * Desc: Decide usage according to args.
  */
int choice(int i,int x) {
    return !(i & 1 ^ x & 1);
}
int main() {
    int a,b;
    printf("Enter numeric part of car's number plate ");
    scanf("%d",&a);
    printf("Enter day of the week ");
    scanf("%d",&b);
    printf("%d",choice(a,b));
    return 0;
}
