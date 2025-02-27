
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);


for ( int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == n / 2 ||                 // Middle row
                j == n / 2 ||                 // Middle column
                j == n / 2 - i ||             // Top-left diagonal
                j == n / 2 + i ||             // Top-right diagonal
                j == i - n / 2 ||             // Bottom-left diagonal
                j == n - 1 - (i - n / 2)) {   // Bottom-right diagonal
                printf("$");
            } else {
                printf("_");
            }
        }
        printf("\n");
    }

    return 0;
}
