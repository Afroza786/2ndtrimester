
#include <stdio.h>

// Function to check if a number is prime
int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Function to calculate the sum of non-prime numbers in the range 1 to x
int sum_of_non_primes(int x) {
    int sum = 0;
    for (int i = 1; i <= x; i++) {
        if (!is_prime(i)) {
            sum += i;
        }
    }
    return sum;
}

// Function to calculate (sum raised to the power n) using a loop
int power_of_sum(int sum, int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result *= sum;
    }
    return result;
}

// Main function
int main() {
    int x, n;

    // Input from user
    printf("Enter the range (x): ");
    scanf("%d", &x);
    printf("Enter the power (n): ");
    scanf("%d", &n);

    // Calculate the sum of non-prime numbers
    int sum = sum_of_non_primes(x);

    // Calculate the result of sum raised to the power n
    int result = power_of_sum(sum, n);

    // Display the results
    printf("Sum of non-prime numbers from 1 to %d = %d\n", x, sum);
    printf("Result of %d^%d = %d\n", sum, n, result);

    return 0;
}
