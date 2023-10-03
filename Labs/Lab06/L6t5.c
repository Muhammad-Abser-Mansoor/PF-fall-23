/**
 * Programmer: Muhammad Abser Mansoor
 * Desc: Integer interpretation
 * Date: 10/3/23
 */
 #include <stdio.h>
 #include <stdlib.h>
 
 int main() {
     int list[7] = {0,1,2,3,4,5,6};
     int i = 0;
     while (i<7) {
           if (i%2==0) {
                       printf(("%d    %d    %d    %d\n"),list[i],list[i],list[i],list[i]);
                       i++; }
           else {
                printf(("      %d    %d      \n"),list[i],list[i]);
                i++; }
                }
                return 0;
                }
                 
           
