#include <stdio.h>

void copyArray(int *source, int *destination, int size) {
    for (int i = 0; i < size; i++) {
        destination[i] = source[i];
    }
}

int main() {
    int size = 10;
    int source[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int destination[10];

    // Copy elements from source to destination
    copyArray(source, destination, size);

    // Display elements of the destination array
    printf("Elements in the destination array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", destination[i]);
    }

    return 0;
}
