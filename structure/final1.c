#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 3

struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct Book books[MAX_BOOKS];
    int i, maxIndex = 0, minIndex = 0;

    for (i = 0; i < MAX_BOOKS; i++) {
        printf("Enter details for book %d:\n", i + 1);
        printf("Title: ");
        getchar();
        gets(books[i].title);

        printf("Author: ");
        gets(books[i].author);


        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    for (i = 1; i < MAX_BOOKS; i++) {
        if (books[i].price > books[maxIndex].price) {
            maxIndex = i;
        }
        if (books[i].price < books[minIndex].price) {
            minIndex = i;
        }
    }

    printf("\nBook with the highest price:\n");
    printf("Title: %s\n", books[maxIndex].title);
    printf("Author: %s\n", books[maxIndex].author);
    printf("Price: %.2f\n", books[maxIndex].price);

    printf("\nBook with the lowest price:\n");
    printf("Title: %s\n", books[minIndex].title);
    printf("Author: %s\n", books[minIndex].author);
    printf("Price: %.2f\n", books[minIndex].price);

    return 0;
}
