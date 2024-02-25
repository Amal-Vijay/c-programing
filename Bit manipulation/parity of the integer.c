#include <stdio.h>
int main() {
    int num, p;

    printf("Enter an integer: ");
    scanf("%d", &num);

    p = num ^ 1;     // Repeatedly XOR with 1 and check the last bit
    while (p) {
        p = p ^ (p & -p);
    }
    p = p & 1;

    p = num & 1;  //Shift and XOR to accumulate all bits
    num >>= 1;
    while (num) {
        p ^= num & 1;
        num >>= 1;
    }

    printf("Parity of %d is %d \n", num, p);

    return 0;
}
