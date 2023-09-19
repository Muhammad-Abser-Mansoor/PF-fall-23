#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = 0;
	int n = 0;
	int j = 0;
	scanf("%d", &n);
	while (j < n) {
	i=0;
	while (i < n) {
		printf("*");
		i = i + 1;
		}
	printf("\n");
	j = j + 1;
	}
	return 0;
}
		
