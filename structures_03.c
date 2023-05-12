// The following structure is for a library book with the following details: id, title, publisher, code (1 – Text 
// book, 2 – Magazine, 3 – Reference book). If the code is 1, store no-of-copies. If code = 2, store the issue 
// month name. If code = 3, store edition number. Also store the cost.
// struct library_book
// {
//  int id; 
//  char title[80];
//  char publisher[20] ;
//  int code; 
//  union u { 
//  int no_of_copies; 
//  char month[10]; 
//  int edition; 
//  }info; 
//  int cost;
// };
// Write a program to accept details of n books. Use switch - case to accept the code and details according to 
// the code.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100

struct library_book {
    int id;
    char title[80];
    char publisher[20];
    int code;
    union {
        int no_of_copies;
        char month[10];
        int edition;
    } info;
    int cost;
};

int num_books = 0;
struct library_book books[MAX_BOOKS];

void add_book() {
    if (num_books >= MAX_BOOKS) {
        printf("Maximum number of books reached.\n");
        return;
    }
    printf("Enter book ID: ");
    scanf("%d", &books[num_books].id);
    printf("Enter book title: ");
    scanf(" %[^\n]", books[num_books].title);
    printf("Enter publisher name: ");
    scanf(" %[^\n]", books[num_books].publisher);
    printf("Enter book code (1-Text book, 2-Magazine, 3-Reference book): ");
    scanf("%d", &books[num_books].code);
    switch (books[num_books].code) {
        case 1:
            printf("Enter number of copies: ");
            scanf("%d", &books[num_books].info.no_of_copies);
            break;
        case 2:
            printf("Enter issue month name: ");
            scanf(" %[^\n]", books[num_books].info.month);
            break;
        case 3:
            printf("Enter edition number: ");
            scanf("%d", &books[num_books].info.edition);
            break;
        default:
            printf("Invalid book code.\n");
            return;
    }
    printf("Enter book cost: ");
    scanf("%d", &books[num_books].cost);
    num_books++;
    printf("Book added.\n");
}

void display_book(struct library_book book) {
    printf("ID: %d\n", book.id);
    printf("Title: %s\n", book.title);
    printf("Publisher: %s\n", book.publisher);
    printf("Code: %d\n", book.code);
    switch (book.code) {
        case 1:
            printf("Number of copies: %d\n", book.info.no_of_copies);
            break;
        case 2:
            printf("Issue month: %s\n", book.info.month);
            break;
        case 3:
            printf("Edition number: %d\n", book.info.edition);
            break;
    }
    printf("Cost: %d\n", book.cost);
    printf("\n");
}

void display_books() {
    if (num_books == 0) {
        printf("No books to display.\n");
        return;
    }
    for (int i = 0; i < num_books; i++) {
        display_book(books[i]);
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n");
        printf("1. Add book\n");
        printf("2. Display all books\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                add_book();
                break;
            case 2:
                display_books();
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    }
    return 0;
}
