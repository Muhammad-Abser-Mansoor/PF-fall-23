#include <stdio.h>

int main() {
	int b = 0;
	printf("Input request to LDR "); // Input from LDR
	scanf("%d", &b); // Input taken from command line
	if (b > 500) {
		printf("High brightness"); }  // Conditions for brightness
	else if (b <= 500 && b >= 100) {
		printf("Medium Brightness"); }
	else if (b > 0 && b < 100) {
		printf("Low Brightness"); }
	else {
		printf("Invalid input"); } // Error for out of bounds value
	return 0;
} //End main
