/**
 * Programmer: Muhammad Abser Mansoor
 * Desc: Integer interpretation
 * Date: 10/3/23
 */
 #include <stdio.h>
 #include <stdlib.h>
 
 int main() {
     int a = 0;
     int b = 0;
     printf("Enter a number ");
     scanf("%d", &a);
     printf("Enter a number ");
     scanf("%d", &b);
     while (a<=b) {
       switch(a)  {
              case 0:
                   printf("Zero ");
                    break;
              case 1:
                   printf("One ");
                    break;
              case 2:
                   printf("Two ");
                    break;
              case 3:
                   printf("Three ");
                    break;
              case 4:
                   printf("Four ");
                    break;
              case 5:
                   printf("Five ");
                    break;
              case 6:
                   printf("Six ");
                   break;
              case 7:
                   printf("Seven ");
                    break;
              case 8:
                   printf("Eight ");
                    break;
              case 9:
                   printf("Nine ");
                    break;
              default:
                   if (a%2 == 0) {
                           printf("Even "); 
                       
                   } else {
                        printf("Odd ");
                    }
            }
            a++;
    }
   return 0;
}
