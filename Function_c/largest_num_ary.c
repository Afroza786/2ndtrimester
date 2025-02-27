#include <stdio.h>

int main() {
    int arr[100];            // Declare an integer array of size 100
    int *arrPtr = arr;       // Declare a pointer and assign it to the array

    // Input elements into the array
    printf("Enter 100 elements:\n");
    for (int i = 0; i < 100; i++) {
        scanf("%d", arrPtr + i); // Using the pointer with an offset to scan values
    }

    // Find the largest element using the pointer
    int max = *arrPtr;  // Initialize max with the first element
    for (int i = 1; i < 100; i++) {
        if (*(arrPtr + i) > max) {
            max = *(arrPtr + i);
        }
    }

    // Print the largest element
    printf("The largest element in the array is: %d\n", max);

    return 0;
}

