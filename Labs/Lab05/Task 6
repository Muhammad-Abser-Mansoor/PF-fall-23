#include <stdio.h>

int main() {
	int bit1 = 0;
	int bit2 = 0; // manually declare each bit since arrays are not allowed
	int bit3 = 0;
	int bit4 = 0;
	int bit5 = 0;
	int bit6 = 0;
	int bit7 = 0;
	int bit8 = 0;
	printf("Enter a 8 bit binary number: ");  // Input the binary number
	scanf("%d%d%d%d%d%d%d%d",&bit1,&bit2,&bit3,&bit4,&bit5,&bit6,&bit7,&bit8);
	if ((bit1 != 0 && bit1 != 1) || (bit2 != 0 && bit2 != 1) || (bit3 != 0 && bit3 != 1) || (bit4 != 0 && bit4 != 1) || (bit5 != 0 && bit5 != 1) || (bit6 != 0 && bit6 != 1) || (bit7 != 0 && bit7 != 1) || (bit8 != 0 && bit8 != 1)) {
		printf("Invalid Value"); } // If any value is not 1 or 0 then error message
	else {
		switch (bit4) { 
			case 1: // Check if bit4 is 1
			bit4 = 0;
			switch (bit7) { //Check bit7 where bit4 is 1
				case 1:
				bit7 = 0;
				printf("New binary number is %d%d%d%d%d%d%d%d",bit1,bit2,bit3,bit4,bit5,bit6,bit7,bit8);
				break;
				default:
				printf("New binary number is %d%d%d%d%d%d%d%d",bit1,bit2,bit3,bit4,bit5,bit6,bit7,bit8); }
			break;
			default:
			switch (bit7) { //Check bit7 where bit4 is 0
				case 1:
				bit7 = 0;
				printf("New binary number is %d%d%d%d%d%d%d%d",bit1,bit2,bit3,bit4,bit5,bit6,bit7,bit8);
				break;
				default:
				printf("New binary number is %d%d%d%d%d%d%d%d",bit1,bit2,bit3,bit4,bit5,bit6,bit7,bit8); }
			}
		}
	return 0;
}//end main
		


