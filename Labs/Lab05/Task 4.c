#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	int ans = 0; //Initialization
	char x = 'e';
	printf("Enter 1st number ");
	scanf("%d", &a);
	printf("Enter 2nd number ");
	scanf("%d", &b);
	printf("Enter operation as +,-,* or / "); //Inputs
	scanf(" %c", &x);
	switch (x) {     // Conditions according to character input
		case '+':
		ans = a + b;
		printf("Sum is &d", ans);
		break;
		case '-':
		ans = a - b;
		printf("Difference is &d", ans);
		break;
		case '*':
		ans = a * b;
		printf("Product is &d", ans);
		break;
		case '/':
		ans = a / b;
		printf("Quotient is %d", ans);
		break;
		default:
		printf("Incorrect Operation"); } //Out of bounds input
	return 0; // End main
}
