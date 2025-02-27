#include <stdio.h>

int main() {
    int a, b, c;

    // Input the three sides of the triangle
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if the sides form a valid triangle
    if (a + b + c==180) {
        if (a == b && b == c) {
            printf("Equilateral\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles\n");
        } else {
            printf("Scalene\n");
        }
    } else {
        printf("Invalid triangle\n");
    }

    return 0;
}
