#include <stdio.h>

// Function to sort the array in ascending order
void ascendingOrder(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Reading the array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting the array
    ascendingOrder(arr, n);

    // Printing the sorted array
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
