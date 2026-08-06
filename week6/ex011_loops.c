#include <stdio.h>

int main() 
{
    int sum;

    sum = 0;
    printf("วิธีที่ 1: for loop\n");
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    printf("แสดง: Sum = %d\n\n", sum);

    sum = 0;
    int i = 1;
    printf("วิธีที่ 2: while loop\n");
    while (i <= 10) {
        sum += i;
        i++;
    }
    printf("แสดง: Sum = %d\n\n", sum);

    sum = 0;
    i = 1;
    printf("วิธีที่ 3: do-while loop\n");
    do {
        sum += i;
        i++;
    } while (i <= 10);
    printf("แสดง: Sum = %d\n", sum);

    return 0;
}