#include <stdio.h>
int addDigits(char str[]) {
    int sum = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            sum += str[i] - '0';
        }
    }
    return sum;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int result = addDigits(str);
    printf("Sum of digits: %d\n", result);

    return 0;
}
