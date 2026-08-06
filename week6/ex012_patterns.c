#include <stdio.h>

int main() {
    printf("Triangle\n");
    for (int row = 1; row <= 5; row++) {
        for (int col = 1; col <= row; col++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("Square\n");
    for (int row = 1; row <= 5; row++) {
        for (int col = 1; col <= 5; col++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("Diamond\n");
    int n = 3;
    for (int row = 1; row <= n; row++) {
        for (int space = 1; space <= n - row; space++) printf(" ");
        for (int col = 1; col <= 2 * row - 1; col++) printf("*");
        printf("\n");
    }
    for (int row = n - 1; row >= 1; row--) {
        for (int space = 1; space <= n - row; space++) printf(" ");
        for (int col = 1; col <= 2 * row - 1; col++) printf("*");
        printf("\n");
    }
    
    return 0;

}