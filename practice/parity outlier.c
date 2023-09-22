#include <stdlib.h>

int find_outlier(const int *values, size_t count);
int i = 0;
int N = 0;
int num = 0;
int test = 0;
while (i < count) {
   test = values[i] % 2;
  num = num + test;
  if (num = 1 && i >= 2) {
    N = values[i];
    printf("Outlier is %d",N);
    return 0;
  }
  else if (num > 1 && i >= 2) {
    N = values[i];
    printf("Outlier is %d",N);
    return 0;
    else {
      return 0;
    }
  }
