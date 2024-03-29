#include <stdio.h>
#include <math.h>

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	double dis = 0; // Double used since value might be in decimals
	double root2 = 0;
	double root1 = 0;
	printf("Enter x^2 co-efficient "); // Input equation values
	scanf("%d", &a);
	printf("Enter x co-efficient ");
	scanf("%d", &b);
	printf("Enter constant ");
	scanf("%d", &c);
	dis = pow(b,2) - 4*a*c;
	if (dis >= 0) {                           // Discriminant cannot be negative for real roots
		root1 = (-b + sqrt(dis)) / (2*a); // Calculation of root
		root2 = (-b - sqrt(dis)) / (2*a); // 2 roots due to +- behind square root
		printf("Root 1 is %f and root 2 is %f",root1,root2); }
	else {
		printf("Invalid Values"); }      // error for values leading to -ive discriminant
	return 0; //End main
}
