#include <stdio.h>
int find_even_index(const int *values, int length) {
  int i = 0;
  int j = length;
  int sum1 = 0;
  int sum2 = 0;
  int num = 0;
  if (length % 2 == 0) {
  while (i < length/2) {
    num = values[i];
    sum1 = sum1 + num;
    while (j > length/2) {
      num = values[j];
      sum2 = sum2 + num;
      j--;
    }
    i++;
  }
    }
  else {
    while (i <= length/2) {
    num = values[i];
    sum1 = sum1 + num;
    while (j > length/2) {
      num = values[j];
      sum2 = sum2 + num;
      j--;
    }
    i++;
  }
}
  if (sum1 == sum2) {
    printf("Sum is %d",sum1);
    return 0; }
  else {
    return -1;
  }
}
