#include <stdio.h>

int main() {
	int cost = 0;
	int act = 0;
	int save = 0;
	int dis = 0;
	printf("Enter price of items bought "); // Cost input
	scanf("%d", &cost);
	if (cost <= 1999) { // No discount
		act = cost;
		printf("Total amount is %d", cost);
		printf("\nActual amount is %d", act);
		printf("\nSaved amount is %d", save); }
	else if (cost >= 2000 && cost <= 4000) { // 20% discount
		dis = 20;
		save = cost*(dis/100);
		act = cost - save;
		printf("Total amount is %d", cost);
		printf("\nActual amount is %d", act);
		printf("\nSaved amount is %d", save); }
	else if (cost >= 4001 && cost <= 6000) { // 30% discount
		dis = 30;
		save = cost*(dis/100);
		act = cost - save;
		printf("Total amount is %d", cost);
		printf("\nActual amount is %d", act);
		printf("\nSaved amount is %d", save); }
	else if {                               // 50% discount
		dis = 50;
		save = cost*(dis/100);
		act = cost - save;
		printf("Total amount is %d", cost);
		printf("\nActual amount is %d", act);
		printf("\nSaved amount is %d", save); }
	else {                                   //Error for out of bounds value
		printf("Invlaid Input"); }
	return 0;
} //end main
