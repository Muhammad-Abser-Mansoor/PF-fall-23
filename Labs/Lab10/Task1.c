#include <stdio.h>
void uniprint(void *arr,int size,char type) {
    for (int i = 0;i<size;i++) {
        switch (type) {
            case 'i':
            printf("%d",*((int*) arr+i));
            break;
            case 'c':
            printf("%c",*((char*)arr+i));
            break;
            case 'd':
            printf("%f",*((double*)arr+i));
            break;
        }
    }
}

int main() {
    int arri[3] = {2,4,6};
    char arrc[3] = {'a','b','c'};
    double arrd[3] = {2.1,4.2,6.3};
    uniprint(arri,3,'i');
    printf("\n");
    uniprint(arrc,3,'c');
    printf("\n");
    uniprint(arrd,3,'d');
    printf("\n");
    return 0;
}
