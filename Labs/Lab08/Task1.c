/* 
  * Programmer: Muhammad Abser Mansoor
  * Date: 24/10/2023
  * Desc: Swap the value of 2 integers
  */

#include<stdio.h>

 /* 
  * Programmer: Muhammad Abser Mansoor
  * Date: 24/10/2023
  * Desc: function for swapping 2 numbers
  */
int Swapintegers(int a,int b) {
	int temp = b;
	b = a;
	a = temp;
	printf("Num 1 is %d and Num 2 is %d",a,b);
	return 0;
}
int main()
{
	int x, y;
	printf("\nEnter two numbers to swap:\n");
	scanf("%d",&x);
	scanf(" %d",&y);
	Swapintegers(x,y);
	return 0;
}
