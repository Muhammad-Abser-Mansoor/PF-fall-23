 /* 
  * Programmer: Muhammad Abser Mansoor
  * Date: 24/10/2023
  * Desc: print a value and address using pointers
  */
#include <stdio.h>

int main() {
	int ar[100];
	long long int arr[100];
	char arrr[100];
	int n = 0;
	printf("enter size of arrays ");
	scanf("%d",&n);
	int i ;
	for (i = 0;i<n;i++) {
		printf("Enter element of int array ");
		scanf("%d",&ar[i]);
		printf("Enter element of long long int array ");
		scanf("%lld",&arr[i]);
		printf("Enter element of char array ");
		scanf(" %c",&arrr[i]);
	}
	for (i=0;i<n;i++) {
		//int *ptr = &ar[i];
		printf("%d\t%p   ",*(ar+i),ar+i); //Pointer prints the value at address ar[0+i] and regular prints the address
		//ptr = &arr[i];
		printf("%lld\t%p   ",*(arr+i),(arr+i)); // same for here
		//ptr = &arrr[i];
		printf("%c\t%p   \n",*(arrr+i),(arrr+i)); // and here
	}
	return 0;
}
