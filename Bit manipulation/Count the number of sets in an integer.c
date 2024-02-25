#include <stdio.h>
void Binary(int n) {
    int size = sizeof(int) * 2;
    int count = 0;

    printf("Binary of integer: ");

    for (int i = size - 1; i >= 0; i--) {
        int bit = (n >> i) & 1;
        printf("%d", bit);
        count += bit;
    }
    printf("\nNumber of bits: %d\n", count);
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    Binary(num);
    return 0;
}
