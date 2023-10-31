 /* 
  * Programmer: Muhammad Abser Mansoor
  * Date: 24/10/2023
  * Desc: Do multiplication using recursive addition
  */

#include <stdio.h>
int multiplication(int n,int ans,int b) {
	if (b > 0) {
	return multiplication(n, ans+n,b-1); }
	else{
		return ans;
	}
}

int main() {
	int n,b;
	int ans = 0;
	printf("Enter number ");
	scanf("%d",&n);
	printf("Enter number ");
	scanf("%d",&b);
	printf("%d",multiplication(n,ans,b));
	return 0;
}
