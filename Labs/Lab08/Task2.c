 /* 
  * Programmer: Muhammad Abser Mansoor
  * Date: 24/10/2023
  * Desc: Create a basic arithmetic calculator
  */

#include <stdio.h>

 /* 
  * Programmer: Muhammad Abser Mansoor
  * Date: 24/10/2023
  * Desc: function for a basic arithmetic calculator
  */
int Calculator(int a,int b,char x) {
	int ans;
    switch (x) {
        case '+':
        ans = a+b;
        return ans;
        break;
        case '-':
        ans = a-b;
        return ans;
        break;
        case '*':
        ans = a*b;
        return ans;
        break;
        case '/':
        ans = a/b;
        return ans;
        break;
        default:
        printf("Incorrect operation");
        return 0;
        break;
    }
}
int main()
{
	int x, y;
    char d;
	printf("\nEnter two numbers to perform an operation on:\n");
	scanf("%d",&x);
	scanf("%d",&y);
    printf("Enter operation: ");
    scanf(" %c",&d);
	printf("Ans is %d",Calculator(x,y,d));
	return 0;
}
