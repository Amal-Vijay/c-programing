#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int p = 1;
    int L = 1, R = sizeof(int) * 2;

    while (L < R) {
        int left_bit = (num >> (R - L)) & 1;
        int right_bit = (num >> L) & 1;

        if (left_bit != right_bit) {
            p = 0;
            break;
        }

        L++;
        R--;
    }

    if (p) {
        printf("%d is a palindrome in binary.\n", num);
    } else {
        printf("%d is not a palindrome in binary.\n", num);
    }

    return 0;
}
