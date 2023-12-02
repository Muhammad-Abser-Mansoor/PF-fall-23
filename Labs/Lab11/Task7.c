/* Programmer: Abser Mansoor
 * Date: 23/11/2023
 * Desc.: Use structs for a library management system
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct library {
    int accn;
    char nameauth[100];
    char title[100];
    int flag;
};

void bookinput(int i) { // Function is used to input the credentials of a book
    printf("Enter the book's accession number ");
    scanf("%d",&book[i].accn);
    printf("Enter the author's name ");
    scanf("%s",book[i].nameauth);
    printf("Enter the book's title ");
    scanf("%s",book[i].title);
    printf("Book added to inventory number %d",i+1);
    return;
}
// Below function uses title and accession number for user convenience otherwise only acc number would be needed
int findbook(char title[], int temp) {
    for (int i = 0;i<100;i++) {
        if (!(strcmp(books[i].title,title)) && books[i].accn == temp) {
            return i;
        }
    } // The function finds a specific book
    return 0;
}

void findauthbooks(char author[]) { // Finds the number of books an author has in the library
    int books[100] = {0};
    int k = 0;
    for (int i = 0;i<100;i++) {
        if (!(strcmp(books[i].authname,author))) {
            books[k] = i;
            k++;
        }
    }
    authoroutput(books,k);
    return;
}

void findtitlebooks(char TITLE[]) { // Finds the number of books of a particular title in the library
    int books[100] = {0};
    int k = 0;
    for (int i = 0;i<100;i++) {
        if (!(strcmp(books[i].title,TITLE))) {
            books[k] = i;
            k++;
        }
    }
    titleoutput(books,k);
    return;
}

void addbook() { // Checks which (if any) slot is available for a new book
    for (int i = 0;i<100;i++) {
        if (books[i].accn == NULL) {
            bookinput(i);
            return;
        }
    }
}

void bookoutput(int i) { // Displays a book's credentials
    if (book[i].flag == 1) {
        printf("Book's accession number: %d\nAuthor name: %d\nTitle: %d\nIssued: no",books[i].accn,books[i].nameauth,books[i].title);
    }
    else {
        printf("Book's accession number: %d\nAuthor name: %d\nTitle: %d\nIssued: yes",books[i].accn,books[i].nameauth,books[i].title);
    }
}

void titleoutput(int books[], int k) { // Outputs all the books of a particular title
    for (int i = 0;i <= k;i++) {
        int curbook = books[i];
        if (book[curbook].flag == 1) {
            printf("Book's accession number: %d\nAuthor name: %d\nTitle: %d\nIssued: no",books[curbook].accn,books[curbook].nameauth,books[curbook].title);
        }
        else {
            printf("Book's accession number: %d\nAuthor name: %d\nTitle: %d\nIssued: yes",books[curbook].accn,books[curbook].nameauth,books[curbook].title);
        }
    }
}

void authoroutput(int books[], int k) { // Outputs all the books by a particular author
    for (int i = 0;i <= k;i++) {
        int curbook = books[i];
        if (book[curbook].flag == 1) {
            printf("Book's accession number: %d\nAuthor name: %d\nTitle: %d\nIssued: no",books[curbook].accn,books[curbook].nameauth,books[curbook].title);
        }
        else {
            printf("Book's accession number: %d\nAuthor name: %d\nTitle: %d\nIssued: yes",books[curbook].accn,books[curbook].nameauth,books[curbook].title);
        }
    }
}

int main() {
    struct library book[100];
    book[0] = {2343,"Abser","Failure",1};
    book[1] = {2311,"Fasih","Effort",1};
    book[2] = {2312,"Rumaisa","Genius",1};
    book[3] = {2313,"Ali","Radical",1};
    for (;;){
        int x = 0;
        int i = 0;
        char c;
    printf("Display book information(1), Add a new book(2), Display all the books in the library of a particular author(3), Display the number of books of a particular title(4), Display the total number of books in the library(5), Issue a book(6). Choose ");
    scanf("%d",&x);
    switch (x) {
        case 1:
        char title[100];
        int num;
        printf("Enter book title and accession number in the format 'name-accessionnumber': ");
        scanf("%s-%d",title,&num);
        if (findbook(title,num)) {
            bookoutput(findbook(title,num));
        }
        else {
            printf("Book does not exist (in here anyway)");
        }
        case 2:
        addbook();
        case 3:
        char author[100];
        printf("Enter the author's name ");
        scanf("%s",author);
        findauthbooks(author);
        case 4:
        char TITLE[101];
        printf("Enter Title ");
        scanf("%s",TITLE);
        findtitlebooks(TITLE);
        case 5:
        int l = 0;
        while (books[l].flag != NULL && (l < 100)) {
            bookoutput(l);
            l++;
        }
        case 6:
        char title2[102];
        int num2;
        printf("Enter book title and accession number in the format 'name-accessionnumber': ");
        scanf("%s-%d",title2,&num2);
        if (findbook(title2,num2)) {
            book[findbook(title2,num2)].flag = 0;
        }
        else {
            printf("Book does not exist");
        }
    }
    printf("Are you done? y or n ");
    scanf(" %c",&c);
    if (c == n) {
        return 0;
    }
    }
    return 0;
}
