#include <stdio.h>

int operation = 1; // Global variable, but problematic for recursion

int fun(int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return operation ? (n * (n - 1)) : (n + (n - 1)); // Handle n=2 case
    }

    if (operation == 1) {
        operation = 0;
        return (n * (n - 1)) + fun(n - 2);
    } else {
        operation = 1;
        return (n + (n - 1)) + fun(n - 2);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Funtorial: %d\n", fun(n)); // Added space after 'Funtorial:'
    return 0;
}
