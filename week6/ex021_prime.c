#include <stdio.h>

int main() {
    int n;

    printf("Enter positive integer: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is NOT a Prime Number\n", n);
        return 0;
    }

    int isPrime = 1;
    int divisor = 0;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            divisor = i;
            break;
        }
    }

    if (isPrime == 1) {
        printf("%d is a Prime Number\n", n);
    } else {
        printf("%d is NOT a Prime Number (divisible by %d)\n", n, divisor);
    }

    return 0;
}
