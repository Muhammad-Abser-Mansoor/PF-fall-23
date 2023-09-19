#include <stdio.h>
#include <math.h>

int main() {
	int bin1 = 0;
	int bin2 = 0;
	printf("Binary number must be a combination of 1s and zeros\nEnter first 4 bit binary numbers ");
	scanf("%d", &bin1); // Input first half of binary number
	printf("Enter last 4 bit binary numbers ");
	scanf("%d", &bin2); // Input last half of binary number
	if ((bin1 < 0000 || bin1 > 1111) || (bin2 < 0000 || bin2 > 1111) || (bin1 == 0000 && bin2 == 0000) || (bin1 == 1111 && bin2 == 1111))  {
		printf("Invalid input"); } // error message for invalid input possibilities
	else {
		printf("New binary number is %d%d",bin2,bin1); } // Print swapped binary halves
	return 0;
} //End main

	
	
		
		
