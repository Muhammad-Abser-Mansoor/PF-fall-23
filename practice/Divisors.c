#include <stdio.h>

int main() {
    int n = 0;
    printf("ffs");
    scanf("%d",&n);
    int array[1000]= {0};
    int check = 0;
    int length = 0;
    int value = 0;
    int i = 2;
    if (n<=1) {
      return;
    }
    while (i<n) {
      check = n%i;
      value = i;
      if (check == 0) {
        array[length]=value;
        i++;
        length++;
      }
      else {
        i++;
      }
    }
    if (length == 0) {
      printf("NULL");
    }
    else {
    i = 0;
    check = 0;
    while (i<length) {
      printf("%d ",array[i]);
      i++;
    }
    printf("\n%d",length);
      }

}
