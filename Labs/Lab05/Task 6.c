#include <stdio.h>

int main() {
	int bin = 0;
	printf("Enter a 8 bit binary number: ");  // Input the binary number
	scanf("%08d",&bin);
	if (bin < 0 && bin > 255) {
		printf("Invalid Value"); } // If any value is not binary then error message
	else if (((bin / 100000) % 10) & ((bin / 100) % 10)) { // Checks the values at 4th and 7th bits using remainder after division by appropriate power of 10
		bin = bin - 1000 - 1000000;
		printf("%08d",bin); } // %08d used to force 8 digits to be output
	else {
		printf("%08d",bin); }
	return 0;
}//end main
