#include <stdio.h>
void swap(void* n1,void* n2,char type) {
    switch (type) {
        case 'i':
        printf("%d  %d\n",*(int *)n1,*(int *)n2);
        *(int *)n1 ^= *(int *)n2;
        *(int *)n2 ^= *(int *)n1;
        *(int *)n1 ^= *(int *)n2;
        printf("%d  %d",*(int *)n1,*(int *)n2);
        break;
        case 'l':
        printf("%ld  %ld\n",*(long *)n1,*(long *)n2);
        *(long *)n1 ^= *(long *)n2;
        *(long *)n2 ^= *(long *)n1;
        *(long *)n1 ^= *(long *)n2;
        printf("%ld  %ld",*(long *)n1,*(long *)n2);
        break;
        case 'c':
        printf("%c  %c\n",*(char *)n1,*(char *)n2);
        *(char *)n1 ^= *(char *)n2;
        *(char *)n2 ^= *(char *)n1;
        *(char *)n1 ^= *(char *)n2;
        printf("%c  %c",*(char *)n1,*(char *)n2);
        break;
    }
}

int main() {
    int i=1;
    int j = 2;
    char t = 'a';
    char y = 'b';
    long a = 1.100;
    long b = 2.200;
    swap((void *) &i,(void *) &j,'i');
    printf("\n");
    swap((void *) &t,(void *) &y,'c');
    printf("\n");
    swap((void *) &a,(void *) &b,'l');
    printf("\n");
}
