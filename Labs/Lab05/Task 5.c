#include <stdio.h>

int main() {
	int n = 0;
	char in = 'x';
	printf("Enter the character "); // Input character
	scanf(" %c", &in);
	n = (int) in; // Computer saves char as values of ascii code1
	if ((n >= 33 && n <= 47) || (n >= 58 && n <= 64) || (n >= 91 && n <= 96) || (n >= 123 && n <= 255)) { // range of special characters
		printf("Character is a special character"); }
	else if (n >= 48 && n <= 57) { // range of digits
		printf("Character is a digit"); }
	else if (n >= 65 && n <= 90) { // range of uppercase alphabets
		printf("Character is Uppercase"); }
	else { // the only condition left is lower alphabets
		printf("Character is lowercase"); }
	return 0;
} //End main
