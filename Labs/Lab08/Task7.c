/* 
  * Programmer: Muhammad Abser Mansoor
  * Date: 24/10/2023
  * Desc: Do operations on an array
  */

#include <stdio.h>
#include <string.h>

 /* 
  * Programmer: Muhammad Abser Mansoor
  * Date: 24/10/2023
  * Desc: Find Max
  */
double calculateDiscount(int times,double price) {
    double discount = 0;
    if (times > 10 && price >= 50) {
        discount = price*0.15;
        return discount;
    }
    else if (times > 5 && price >= 30) {
        discount = price*0.1;
        return discount;
    }
    else {
        discount = 0;
        return discount;
    }
}
int main() {
    int ti=0;
    double pr=0;
    printf("Enter how many times you visited in this month ");
    scanf("%d",&ti);
    printf("Enter total price ");
    scanf("%lf",&pr);
    printf("%lf",calculateDiscount(ti,pr));
    return 0;
}
