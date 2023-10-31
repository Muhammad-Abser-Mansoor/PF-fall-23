/* 
  * Programmer: Muhammad Abser Mansoor
  * Date: 24/10/2023
  * Desc: Reverse an array using functions
  */

#include <stdio.h>

int reverse(int *arr,int size) {
	int i;
	for (i = 0;i<size/2;i++) {
		int temp = *(arr+i);
	*(arr+i) = *(arr+size-1-i);
	*(arr + size- 1 - i) = temp; }
}

int main() {
	int ar[10];
	int n = 0;
	int i ;
	for (i = 0;i<10;i++) {
		printf("Enter element ");
		scanf("%d",&ar[i]);
	}
	reverse(ar, 10);
	i=0 ;
	for (i = 0;i<10;i++) {
		printf("%d ",ar[i]);
	}
	return 0;
}
