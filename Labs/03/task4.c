#include <stdio.h>

int main() {
	int a = 0,b = 0;
	char x = 'e';
	float ans = 0;
	printf("Enter Any Number: ");
	scanf("%d", &a);
	printf("Enter An Operation (+, -, *, /) : ");
	scanf(" %c", &x);
	printf("Enter Any Number: ");
	scanf("%d", &b);
	if (a <= 0 || b <= 0) {
	printf("Use positive non zero values");
}
	else if (x == '+') {
	float ans = a+b;
	printf("sum is: %f", ans);
}
	else if (x == '-') {
	float ans = a-b;
	printf("difference is: %f", ans);
}
	else if (x == '*') {
	int ans = a*b;
	printf("sum is: %f", ans);
}
	else if (x == '/') {
	int ans = a/b;
	printf("sum is: %f", ans);
}
	else {
	printf("Error");
}
	return 1;
}
	
