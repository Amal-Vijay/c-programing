#include <stdio.h>
void intToBinary(int n) {
    int size = sizeof(int) * 2;

    for (int i = size - 1; i >= 0; i--) {
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Binary representation: ");
    intToBinary(num);

    return 0;
}

