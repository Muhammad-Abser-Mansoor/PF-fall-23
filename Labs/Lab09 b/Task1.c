 /* 
  * Programmer: Muhammad Abser Mansoor
  * Date: 24/10/2023
  * Desc: Find factorial using recursion
  */

#include <stdio.h>
int factorial(int n,int ans) {
	if (n > 0) {
	return factorial(n-1, ans*n); }
	else{
		return ans;
	}
}

int main() {
	int n;
	int ans = 1;
	printf("Enter number ");
	scanf("%d",&n);
	printf("%d",factorial(n,ans));
	return 0;
}
