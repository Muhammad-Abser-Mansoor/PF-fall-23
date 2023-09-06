#include <stdio.h>

int main() {
	int s = 15, w = 10, n = 15, total = 0;
	total = s + w + n;
	int fuel = total * 2;
	printf("Total distance travelled is %d Kilometers \n", total);
	printf("Total fuel consumed is %d liters", fuel);
	return 1;
}
