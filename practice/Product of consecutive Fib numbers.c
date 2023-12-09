typedef unsigned long long ull;

unsigned long long* productFib(ull prod) {
 long long last = 0;
  long long current = 1;
  long long temp;
  ull *arr = malloc(sizeof(ull)*3);
  while (last * current < prod) {
    temp = last;
    last = current;
    current = temp + last;
    if (current * last == prod) {
     arr[0] = last;
     arr[1] = current;
     arr[2] = 1;
     return arr;
    }
  }
  arr[0] = last;
  arr[1] = current;
  arr[2] = 0;
  return arr;
}
