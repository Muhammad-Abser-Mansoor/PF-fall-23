#include <stdlib.h> //COMPLETE AND WORKING
#include <stdio.h>
int main() {
int n[5] = {4,6,3,2,8};
int i = 0;
int N = 0;
int num = 0;
int test = 0;
int count = 5;
while (i < count) {
   test = n[i] % 2;
  num = num + test;
  if (num = 1 && i >= 2) {
    N = n[i];
    printf("Outlier is %d",N);
    return 0;
  }
  else if (num > 1 && i >= 2) {
    N = n[i];
    printf("Outlier is %d",N);
    return 0; }
    else {
      i++;
    }
  }
}
