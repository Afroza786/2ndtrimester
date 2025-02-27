#include <stdio.h>

int main() {
    float units, bill , total_bill;

    // Input the units consumed
    printf("Enter the electricity units consumed: ");
    scanf("%f", &units);

    // Calculate the bill based on the given conditions
    if (units <= 50) {
        bill = units * 0.50;
    } else if (units <= 150) {
        bill = (50 * 0.50) + ((units - 50) * 0.75);
    } else if (units <= 250) {
        bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    } else {
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    // Add 20% additional charge
    total_bill = bill + (bill * 0.20);

    // Print the total bill
    printf("Total electricity bill: Tk. %.0f\n", total_bill);

    return 0;
}
