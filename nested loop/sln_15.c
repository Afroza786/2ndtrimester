#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {          // Loop for rows
        for (int j = 1; j <= n; j++) {      // Loop for columns
            if (i == 1 || i == n) {         // Print Z on the first and last row
                printf("Z");
            } else if (j == n - i + 1) {    // Print Z for the diagonal line
                printf("Z");
            } else {
                printf(" ");                // Print space elsewhere
            }
        }
        printf("\n");                       // Move to the next row
    }
    return 0;
}
