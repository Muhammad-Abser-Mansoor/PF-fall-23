#include <stddef.h>

size_t duplicate_count(const char *text) {

    int i = 0;
    int j = 0;
    char array[1000]={0};
    while (text[i] != '\0') {
      array[i] = text[i];
      i++;
    }
    int check = 0;
    int k = 0;
    int dup = -1;
    while (j<i) {
      check = (int)array[j];
      while (k<i) {
        if ((int)array[k] == check) {
          dup++;
          for (int rem = k;rem<i - 1;rem++) {
          array[k] = array[k + 1]; }
          k++;
        }
        else {
          k++;
        }
      }
      if (dup > 0) {
       return 1;
      }
      else {
        j++;
      }
    }
return 0;
}
