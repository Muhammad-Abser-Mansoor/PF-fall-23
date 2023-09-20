#include<stdio.h>

int main() {
	int n = 0; // variable declaration
	printf("Enter a 8 bit binary number ");
	scanf("%08d", &n); // %08d to only accept 8 bit values
	if (n <= 00000000 || n >= 11111111) {
		printf("Invalid input"); // Error for invalid input
		return 0;
	}
	int rsh = n % 10000; // separate right hand side bits of number
	int lsh = n / 10000; // separate left hand side bits of number
	printf("%04d%04d",rsh,lsh); // shift positions and print
	return 0;
} // End main
