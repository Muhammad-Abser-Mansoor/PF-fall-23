#include <stdio.h>

int main() {
    char arr[100];
    char rev[100];
    char con = 'x';
    int count = 0;
    int n = 0;
    int i = 0;
    printf("Enter Length of word ");
    scanf("%d", &n);
    if (n > 100) {
        printf("Word limit exceeded\n");
        return 1;
    }
    while (con != 'y' && i < n) {
        printf("Enter a character ");
        scanf(" %c", &arr[i]);
        rev[i] = arr[i];
        printf("Is the word complete?(y or n) ");
        scanf(" %c", &con);
        i++;
        count++;
    }
        if (count != n) {
            printf("Invalid input\n"); }
            else {
                int a = 0;
                int b = n - 1;
                while (a <= b) {
                    if (arr[b] != rev[a]) {
                        printf("Not a palindrome\n");
                        return 0;    }
                        a++;
                        b--;
                }
                printf("Word is a Palindrome\n");
                    }
                    return 0;
                }
