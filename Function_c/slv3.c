#include <stdio.h>
int main() {

    int n, i, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        int num;
        scanf("%d", &num);
        sum += num;
    }
    printf("Sum of main function: %d\n", sum);

    return 0;

}
