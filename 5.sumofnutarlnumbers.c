#include <stdio.h>

int main() {
    int num, i, sum = 0;

    // Ask user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate sum of natural numbers
    for (i = 1; i <= num; i++) {
        sum += i;
    }

    // Output the result
    printf("Sum of natural numbers from 1 to %d is: %d\n", num, sum);

    return 0;
}
