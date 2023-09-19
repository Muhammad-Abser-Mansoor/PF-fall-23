#include <stdio.h>

int main() {
	char x = 'e';
	printf("Are you sure you want to delete this file? Press y for yes and n for no \n");
	scanf(" %c", &x); // Input
	switch(x) { // Conditions according to char input
		case 'y':
		printf("\n File Deleted Successfully");
		break;
		case 'n':
		printf("\n File deletion aborted");
		break;
		default: // Out of bounds value
		printf("\n Incorrect Input imma delete that shite"); }
	return 0;
} //End main
