#include <stdio.h>
int main() {
 int num1 = 1;
 int i = 0;
 int n = 999;
  if (n >= 10) {
    while (!(n<10)) {
    if (n<100 && n>=10) {
        num1=num1*num1%10*num1%100;
        n=num1;
        i++;}
    else {
        num1 = num1*n%10;
        n = n/10;
        i++;
    } }
  printf("%d %d",num1,i); }
    else {
      printf("0");
    }
  return 0;
}
