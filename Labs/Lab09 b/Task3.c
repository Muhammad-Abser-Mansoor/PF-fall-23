 /* 
  * Programmer: Muhammad Abser Mansoor
  * Date: 24/10/2023
  * Desc: Reverse an array using functions
  */

#include <stdio.h>
int gcd(int a,int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcd(b,a%b);
	}
}

int main() {
	int a,b;
	printf("Enter number ");
	scanf("%d",&a);
	printf("Enter number ");
	scanf("%d",&b);
	printf("%d",gcd(a,b));
	return 0;
}
